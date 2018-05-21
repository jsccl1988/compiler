/**
 * <h1>TypeSpec</h1>
 *
 * <p>The interface for a type specification.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef TYPESPEC_H_
#define TYPESPEC_H_

#include <vector>
#include <map>
#include "symtabimpl/Predefined.h"
#include "SymTabEntry.h"

namespace wci { namespace intermediate {

using namespace std;


typedef enum
{
    expr_mul_div,
    expr_add_min,
    expr_primary,
} expression_type_E;

/**
 * Type specification key
 */
enum class TypeKey
{
    // to be "subclassed" by implementation-specific type keys
};

class TypeSpec;  // forward declaration

/**
 * Type specification form implementation
 */
enum class TypeFormImpl
{
    SCALAR, ENUMERATION, SUBRANGE, ARRAY, RECORD,
};

constexpr TypeFormImpl TF_SCALAR = TypeFormImpl::SCALAR;
constexpr TypeFormImpl TF_ENUMERATION = TypeFormImpl::ENUMERATION;
constexpr TypeFormImpl TF_SUBRANGE = TypeFormImpl::SUBRANGE;
constexpr TypeFormImpl TF_ARRAY = TypeFormImpl::ARRAY;
constexpr TypeFormImpl TF_RECORD = TypeFormImpl::RECORD;

/**
 * Type value.
 */
struct TypeValue
{
    DataValue *value;
    TypeSpec  *typespec;
    SymTab    *symtab;
    vector<SymTabEntry *> v;

    TypeValue()                   : value(nullptr) , typespec(nullptr)  , symtab(nullptr) {}
    TypeValue(DataValue *value)   : value(value)   , typespec(nullptr)  , symtab(nullptr) {}
    TypeValue(TypeSpec *typespec) : value(nullptr) , typespec(typespec) , symtab(nullptr) {}
    TypeValue(SymTab *symtab)     : value(nullptr) , typespec(nullptr)  , symtab(symtab)  {}

    ~TypeValue() {}
};

class TypeSpec
{
public:
    /**
     * Destructor.
     */
    virtual ~TypeSpec() {}

    /**
     * Getter
     * @return the type form.
     */
    virtual TypeFormImpl get_form() const = 0;

    /**
     * Getter.
     * @return the type identifier (symbol table entry).
     */
    virtual SymTabEntry *get_identifier() const = 0;

    /**
     * Setter.
     * @param id the type identifier (symbol table entry).
     */
    virtual void set_identifier(SymTabEntry *id) = 0;

    /**
     * Set an attribute of the specification.
     * @param key the attribute key.
     * @param value the attribute value.
     */
    virtual void set_attribute(TypeKey key, TypeValue *value) = 0;

    /**
     * Get the value of an attribute of the specification.
     * @param key the attribute key.
     * @return the attribute value.
     */
    virtual TypeValue *get_attribute(TypeKey key) = 0;

    /**
     * To be defined by an implementation subclass.
     * @return true if this is a Pascal string type.
     */
    virtual bool is_pascal_string() = 0;

    /**
     * To be defined by an implementation subclass.
     * @return the base type of this type.
     */
    virtual TypeSpec *base_type() = 0;

    friend ostream & operator << (ostream & out, const TypeSpec * other);

    string to_string() const;
    
};

}}  // namespace wci::intermediate

#endif /* TYPESPEC_H_ */
