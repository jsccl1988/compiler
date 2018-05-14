
#include "wci/intermediate/symtab.h"
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from grammars/Pcl2.g4 by ANTLR 4.7


#include "Pcl2Listener.h"
#include "Pcl2Visitor.h"

#include "Pcl2Parser.h"


using namespace antlrcpp;
using namespace antlr4;

Pcl2Parser::Pcl2Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

Pcl2Parser::~Pcl2Parser() {
  delete _interpreter;
}

std::string Pcl2Parser::getGrammarFileName() const {
  return "Pcl2.g4";
}

const std::vector<std::string>& Pcl2Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& Pcl2Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

Pcl2Parser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::CompilationUnitContext::EOF() {
  return getToken(Pcl2Parser::EOF, 0);
}

Pcl2Parser::TranslationUnitContext* Pcl2Parser::CompilationUnitContext::translationUnit() {
  return getRuleContext<Pcl2Parser::TranslationUnitContext>(0);
}


size_t Pcl2Parser::CompilationUnitContext::getRuleIndex() const {
  return Pcl2Parser::RuleCompilationUnit;
}

void Pcl2Parser::CompilationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompilationUnit(this);
}

void Pcl2Parser::CompilationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompilationUnit(this);
}


antlrcpp::Any Pcl2Parser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::CompilationUnitContext* Pcl2Parser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, Pcl2Parser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::Char)
      | (1ULL << Pcl2Parser::Bool)
      | (1ULL << Pcl2Parser::Double)
      | (1ULL << Pcl2Parser::Float)
      | (1ULL << Pcl2Parser::Int)
      | (1ULL << Pcl2Parser::Void)
      | (1ULL << Pcl2Parser::Semi))) != 0)) {
      setState(50);
      translationUnit(0);
    }
    setState(53);
    match(Pcl2Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TranslationUnitContext ------------------------------------------------------------------

Pcl2Parser::TranslationUnitContext::TranslationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::ExternalDeclarationContext* Pcl2Parser::TranslationUnitContext::externalDeclaration() {
  return getRuleContext<Pcl2Parser::ExternalDeclarationContext>(0);
}

Pcl2Parser::TranslationUnitContext* Pcl2Parser::TranslationUnitContext::translationUnit() {
  return getRuleContext<Pcl2Parser::TranslationUnitContext>(0);
}


size_t Pcl2Parser::TranslationUnitContext::getRuleIndex() const {
  return Pcl2Parser::RuleTranslationUnit;
}

void Pcl2Parser::TranslationUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTranslationUnit(this);
}

void Pcl2Parser::TranslationUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTranslationUnit(this);
}


antlrcpp::Any Pcl2Parser::TranslationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitTranslationUnit(this);
  else
    return visitor->visitChildren(this);
}


Pcl2Parser::TranslationUnitContext* Pcl2Parser::translationUnit() {
   return translationUnit(0);
}

Pcl2Parser::TranslationUnitContext* Pcl2Parser::translationUnit(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::TranslationUnitContext *_localctx = _tracker.createInstance<TranslationUnitContext>(_ctx, parentState);
  Pcl2Parser::TranslationUnitContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, Pcl2Parser::RuleTranslationUnit, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(56);
    externalDeclaration();
    _ctx->stop = _input->LT(-1);
    setState(62);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<TranslationUnitContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleTranslationUnit);
        setState(58);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(59);
        externalDeclaration(); 
      }
      setState(64);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExternalDeclarationContext ------------------------------------------------------------------

Pcl2Parser::ExternalDeclarationContext::ExternalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::FunctionDefinitionContext* Pcl2Parser::ExternalDeclarationContext::functionDefinition() {
  return getRuleContext<Pcl2Parser::FunctionDefinitionContext>(0);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::ExternalDeclarationContext::declaration() {
  return getRuleContext<Pcl2Parser::DeclarationContext>(0);
}

tree::TerminalNode* Pcl2Parser::ExternalDeclarationContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}


size_t Pcl2Parser::ExternalDeclarationContext::getRuleIndex() const {
  return Pcl2Parser::RuleExternalDeclaration;
}

void Pcl2Parser::ExternalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternalDeclaration(this);
}

void Pcl2Parser::ExternalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternalDeclaration(this);
}


antlrcpp::Any Pcl2Parser::ExternalDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitExternalDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ExternalDeclarationContext* Pcl2Parser::externalDeclaration() {
  ExternalDeclarationContext *_localctx = _tracker.createInstance<ExternalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, Pcl2Parser::RuleExternalDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      functionDefinition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      declaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      match(Pcl2Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

Pcl2Parser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::TypeSpecifierContext* Pcl2Parser::FunctionDefinitionContext::typeSpecifier() {
  return getRuleContext<Pcl2Parser::TypeSpecifierContext>(0);
}

tree::TerminalNode* Pcl2Parser::FunctionDefinitionContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

Pcl2Parser::ParameterTypeListContext* Pcl2Parser::FunctionDefinitionContext::parameterTypeList() {
  return getRuleContext<Pcl2Parser::ParameterTypeListContext>(0);
}

Pcl2Parser::CompoundStatementContext* Pcl2Parser::FunctionDefinitionContext::compoundStatement() {
  return getRuleContext<Pcl2Parser::CompoundStatementContext>(0);
}


size_t Pcl2Parser::FunctionDefinitionContext::getRuleIndex() const {
  return Pcl2Parser::RuleFunctionDefinition;
}

void Pcl2Parser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void Pcl2Parser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


antlrcpp::Any Pcl2Parser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::FunctionDefinitionContext* Pcl2Parser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 6, Pcl2Parser::RuleFunctionDefinition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    typeSpecifier();
    setState(71);
    match(Pcl2Parser::Identifier);
    setState(72);
    parameterTypeList();
    setState(73);
    compoundStatement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

Pcl2Parser::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::TypeSpecifierContext* Pcl2Parser::FunctionDeclarationContext::typeSpecifier() {
  return getRuleContext<Pcl2Parser::TypeSpecifierContext>(0);
}

tree::TerminalNode* Pcl2Parser::FunctionDeclarationContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}


size_t Pcl2Parser::FunctionDeclarationContext::getRuleIndex() const {
  return Pcl2Parser::RuleFunctionDeclaration;
}

void Pcl2Parser::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void Pcl2Parser::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any Pcl2Parser::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::FunctionDeclarationContext* Pcl2Parser::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, Pcl2Parser::RuleFunctionDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    typeSpecifier();
    setState(76);
    match(Pcl2Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

Pcl2Parser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::TypeSpecifierContext* Pcl2Parser::DeclarationContext::typeSpecifier() {
  return getRuleContext<Pcl2Parser::TypeSpecifierContext>(0);
}

std::vector<tree::TerminalNode *> Pcl2Parser::DeclarationContext::Identifier() {
  return getTokens(Pcl2Parser::Identifier);
}

tree::TerminalNode* Pcl2Parser::DeclarationContext::Identifier(size_t i) {
  return getToken(Pcl2Parser::Identifier, i);
}

tree::TerminalNode* Pcl2Parser::DeclarationContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}

std::vector<tree::TerminalNode *> Pcl2Parser::DeclarationContext::Comma() {
  return getTokens(Pcl2Parser::Comma);
}

tree::TerminalNode* Pcl2Parser::DeclarationContext::Comma(size_t i) {
  return getToken(Pcl2Parser::Comma, i);
}

std::vector<Pcl2Parser::AssignmentExpressionContext *> Pcl2Parser::DeclarationContext::assignmentExpression() {
  return getRuleContexts<Pcl2Parser::AssignmentExpressionContext>();
}

Pcl2Parser::AssignmentExpressionContext* Pcl2Parser::DeclarationContext::assignmentExpression(size_t i) {
  return getRuleContext<Pcl2Parser::AssignmentExpressionContext>(i);
}


size_t Pcl2Parser::DeclarationContext::getRuleIndex() const {
  return Pcl2Parser::RuleDeclaration;
}

void Pcl2Parser::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void Pcl2Parser::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any Pcl2Parser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 10, Pcl2Parser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      typeSpecifier();
      setState(79);
      match(Pcl2Parser::Identifier);
      setState(84);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Pcl2Parser::Comma) {
        setState(80);
        match(Pcl2Parser::Comma);
        setState(81);
        match(Pcl2Parser::Identifier);
        setState(86);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(87);
      match(Pcl2Parser::Semi);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(89);
      typeSpecifier();
      setState(90);
      assignmentExpression();
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Pcl2Parser::Comma) {
        setState(91);
        match(Pcl2Parser::Comma);
        setState(92);
        assignmentExpression();
        setState(97);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(98);
      match(Pcl2Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeSpecifierContext ------------------------------------------------------------------

Pcl2Parser::TypeSpecifierContext::TypeSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Void() {
  return getToken(Pcl2Parser::Void, 0);
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Bool() {
  return getToken(Pcl2Parser::Bool, 0);
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Char() {
  return getToken(Pcl2Parser::Char, 0);
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Int() {
  return getToken(Pcl2Parser::Int, 0);
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Float() {
  return getToken(Pcl2Parser::Float, 0);
}

tree::TerminalNode* Pcl2Parser::TypeSpecifierContext::Double() {
  return getToken(Pcl2Parser::Double, 0);
}


size_t Pcl2Parser::TypeSpecifierContext::getRuleIndex() const {
  return Pcl2Parser::RuleTypeSpecifier;
}

void Pcl2Parser::TypeSpecifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeSpecifier(this);
}

void Pcl2Parser::TypeSpecifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeSpecifier(this);
}


antlrcpp::Any Pcl2Parser::TypeSpecifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitTypeSpecifier(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::TypeSpecifierContext* Pcl2Parser::typeSpecifier() {
  TypeSpecifierContext *_localctx = _tracker.createInstance<TypeSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 12, Pcl2Parser::RuleTypeSpecifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::Char)
      | (1ULL << Pcl2Parser::Bool)
      | (1ULL << Pcl2Parser::Double)
      | (1ULL << Pcl2Parser::Float)
      | (1ULL << Pcl2Parser::Int)
      | (1ULL << Pcl2Parser::Void))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

Pcl2Parser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::FunctionCallContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

tree::TerminalNode* Pcl2Parser::FunctionCallContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

tree::TerminalNode* Pcl2Parser::FunctionCallContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

tree::TerminalNode* Pcl2Parser::FunctionCallContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}

Pcl2Parser::IdentifierListContext* Pcl2Parser::FunctionCallContext::identifierList() {
  return getRuleContext<Pcl2Parser::IdentifierListContext>(0);
}


size_t Pcl2Parser::FunctionCallContext::getRuleIndex() const {
  return Pcl2Parser::RuleFunctionCall;
}

void Pcl2Parser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void Pcl2Parser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


antlrcpp::Any Pcl2Parser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::FunctionCallContext* Pcl2Parser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 14, Pcl2Parser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(Pcl2Parser::Identifier);
    setState(105);
    match(Pcl2Parser::LeftParen);
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Pcl2Parser::Identifier) {
      setState(106);
      identifierList();
    }
    setState(109);
    match(Pcl2Parser::RightParen);
    setState(110);
    match(Pcl2Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionReturnContext ------------------------------------------------------------------

Pcl2Parser::FunctionReturnContext::FunctionReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::FunctionReturnContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

tree::TerminalNode* Pcl2Parser::FunctionReturnContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

tree::TerminalNode* Pcl2Parser::FunctionReturnContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

Pcl2Parser::IdentifierListContext* Pcl2Parser::FunctionReturnContext::identifierList() {
  return getRuleContext<Pcl2Parser::IdentifierListContext>(0);
}


size_t Pcl2Parser::FunctionReturnContext::getRuleIndex() const {
  return Pcl2Parser::RuleFunctionReturn;
}

void Pcl2Parser::FunctionReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionReturn(this);
}

void Pcl2Parser::FunctionReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionReturn(this);
}


antlrcpp::Any Pcl2Parser::FunctionReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitFunctionReturn(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::FunctionReturnContext* Pcl2Parser::functionReturn() {
  FunctionReturnContext *_localctx = _tracker.createInstance<FunctionReturnContext>(_ctx, getState());
  enterRule(_localctx, 16, Pcl2Parser::RuleFunctionReturn);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(Pcl2Parser::Identifier);
    setState(113);
    match(Pcl2Parser::LeftParen);
    setState(115);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == Pcl2Parser::Identifier) {
      setState(114);
      identifierList();
    }
    setState(117);
    match(Pcl2Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- JumpStatementContext ------------------------------------------------------------------

Pcl2Parser::JumpStatementContext::JumpStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::JumpStatementContext::Return() {
  return getToken(Pcl2Parser::Return, 0);
}

tree::TerminalNode* Pcl2Parser::JumpStatementContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::JumpStatementContext::expression() {
  return getRuleContext<Pcl2Parser::ExpressionContext>(0);
}


size_t Pcl2Parser::JumpStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleJumpStatement;
}

void Pcl2Parser::JumpStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJumpStatement(this);
}

void Pcl2Parser::JumpStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJumpStatement(this);
}


antlrcpp::Any Pcl2Parser::JumpStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitJumpStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::JumpStatementContext* Pcl2Parser::jumpStatement() {
  JumpStatementContext *_localctx = _tracker.createInstance<JumpStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, Pcl2Parser::RuleJumpStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(Pcl2Parser::Return);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 37) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 37)) & ((1ULL << (Pcl2Parser::LeftParen - 37))
      | (1ULL << (Pcl2Parser::IntegerConstant - 37))
      | (1ULL << (Pcl2Parser::FloatConstant - 37))
      | (1ULL << (Pcl2Parser::Identifier - 37)))) != 0)) {
      setState(120);
      expression(0);
    }
    setState(123);
    match(Pcl2Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

Pcl2Parser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> Pcl2Parser::IdentifierListContext::Identifier() {
  return getTokens(Pcl2Parser::Identifier);
}

tree::TerminalNode* Pcl2Parser::IdentifierListContext::Identifier(size_t i) {
  return getToken(Pcl2Parser::Identifier, i);
}

std::vector<tree::TerminalNode *> Pcl2Parser::IdentifierListContext::Comma() {
  return getTokens(Pcl2Parser::Comma);
}

tree::TerminalNode* Pcl2Parser::IdentifierListContext::Comma(size_t i) {
  return getToken(Pcl2Parser::Comma, i);
}


size_t Pcl2Parser::IdentifierListContext::getRuleIndex() const {
  return Pcl2Parser::RuleIdentifierList;
}

void Pcl2Parser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void Pcl2Parser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}


antlrcpp::Any Pcl2Parser::IdentifierListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIdentifierList(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::IdentifierListContext* Pcl2Parser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 20, Pcl2Parser::RuleIdentifierList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(Pcl2Parser::Identifier);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == Pcl2Parser::Comma) {
      setState(126);
      match(Pcl2Parser::Comma);
      setState(127);
      match(Pcl2Parser::Identifier);
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStatementContext ------------------------------------------------------------------

Pcl2Parser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::CompoundStatementContext::LeftBrace() {
  return getToken(Pcl2Parser::LeftBrace, 0);
}

tree::TerminalNode* Pcl2Parser::CompoundStatementContext::RightBrace() {
  return getToken(Pcl2Parser::RightBrace, 0);
}

Pcl2Parser::BlockItemListContext* Pcl2Parser::CompoundStatementContext::blockItemList() {
  return getRuleContext<Pcl2Parser::BlockItemListContext>(0);
}


size_t Pcl2Parser::CompoundStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleCompoundStatement;
}

void Pcl2Parser::CompoundStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStatement(this);
}

void Pcl2Parser::CompoundStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStatement(this);
}


antlrcpp::Any Pcl2Parser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::CompoundStatementContext* Pcl2Parser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, Pcl2Parser::RuleCompoundStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(Pcl2Parser::LeftBrace);
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::Char)
      | (1ULL << Pcl2Parser::Bool)
      | (1ULL << Pcl2Parser::Double)
      | (1ULL << Pcl2Parser::Float)
      | (1ULL << Pcl2Parser::If)
      | (1ULL << Pcl2Parser::Int)
      | (1ULL << Pcl2Parser::Return)
      | (1ULL << Pcl2Parser::Void)
      | (1ULL << Pcl2Parser::While)
      | (1ULL << Pcl2Parser::LeftParen)
      | (1ULL << Pcl2Parser::LeftBrace)
      | (1ULL << Pcl2Parser::PlusPlus)
      | (1ULL << Pcl2Parser::MinusMinus)
      | (1ULL << Pcl2Parser::Semi))) != 0) || ((((_la - 79) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 79)) & ((1ULL << (Pcl2Parser::IntegerConstant - 79))
      | (1ULL << (Pcl2Parser::FloatConstant - 79))
      | (1ULL << (Pcl2Parser::Identifier - 79)))) != 0)) {
      setState(134);
      blockItemList(0);
    }
    setState(137);
    match(Pcl2Parser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemListContext ------------------------------------------------------------------

Pcl2Parser::BlockItemListContext::BlockItemListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::BlockItemContext* Pcl2Parser::BlockItemListContext::blockItem() {
  return getRuleContext<Pcl2Parser::BlockItemContext>(0);
}

Pcl2Parser::BlockItemListContext* Pcl2Parser::BlockItemListContext::blockItemList() {
  return getRuleContext<Pcl2Parser::BlockItemListContext>(0);
}


size_t Pcl2Parser::BlockItemListContext::getRuleIndex() const {
  return Pcl2Parser::RuleBlockItemList;
}

void Pcl2Parser::BlockItemListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItemList(this);
}

void Pcl2Parser::BlockItemListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItemList(this);
}


antlrcpp::Any Pcl2Parser::BlockItemListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitBlockItemList(this);
  else
    return visitor->visitChildren(this);
}


Pcl2Parser::BlockItemListContext* Pcl2Parser::blockItemList() {
   return blockItemList(0);
}

Pcl2Parser::BlockItemListContext* Pcl2Parser::blockItemList(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::BlockItemListContext *_localctx = _tracker.createInstance<BlockItemListContext>(_ctx, parentState);
  Pcl2Parser::BlockItemListContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, Pcl2Parser::RuleBlockItemList, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(140);
    blockItem();
    _ctx->stop = _input->LT(-1);
    setState(146);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BlockItemListContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBlockItemList);
        setState(142);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(143);
        blockItem(); 
      }
      setState(148);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

Pcl2Parser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::StatementContext* Pcl2Parser::BlockItemContext::statement() {
  return getRuleContext<Pcl2Parser::StatementContext>(0);
}

Pcl2Parser::DeclarationContext* Pcl2Parser::BlockItemContext::declaration() {
  return getRuleContext<Pcl2Parser::DeclarationContext>(0);
}


size_t Pcl2Parser::BlockItemContext::getRuleIndex() const {
  return Pcl2Parser::RuleBlockItem;
}

void Pcl2Parser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void Pcl2Parser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}


antlrcpp::Any Pcl2Parser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::BlockItemContext* Pcl2Parser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 26, Pcl2Parser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::If:
      case Pcl2Parser::Return:
      case Pcl2Parser::While:
      case Pcl2Parser::LeftParen:
      case Pcl2Parser::LeftBrace:
      case Pcl2Parser::PlusPlus:
      case Pcl2Parser::MinusMinus:
      case Pcl2Parser::Semi:
      case Pcl2Parser::IntegerConstant:
      case Pcl2Parser::FloatConstant:
      case Pcl2Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(149);
        statement();
        break;
      }

      case Pcl2Parser::Char:
      case Pcl2Parser::Bool:
      case Pcl2Parser::Double:
      case Pcl2Parser::Float:
      case Pcl2Parser::Int:
      case Pcl2Parser::Void: {
        enterOuterAlt(_localctx, 2);
        setState(150);
        declaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

Pcl2Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::CompoundStatementContext* Pcl2Parser::StatementContext::compoundStatement() {
  return getRuleContext<Pcl2Parser::CompoundStatementContext>(0);
}

Pcl2Parser::ExpressionStatementContext* Pcl2Parser::StatementContext::expressionStatement() {
  return getRuleContext<Pcl2Parser::ExpressionStatementContext>(0);
}

Pcl2Parser::SelectionStatementContext* Pcl2Parser::StatementContext::selectionStatement() {
  return getRuleContext<Pcl2Parser::SelectionStatementContext>(0);
}

Pcl2Parser::IterationStatementContext* Pcl2Parser::StatementContext::iterationStatement() {
  return getRuleContext<Pcl2Parser::IterationStatementContext>(0);
}

Pcl2Parser::AssignmentStatementContext* Pcl2Parser::StatementContext::assignmentStatement() {
  return getRuleContext<Pcl2Parser::AssignmentStatementContext>(0);
}

Pcl2Parser::JumpStatementContext* Pcl2Parser::StatementContext::jumpStatement() {
  return getRuleContext<Pcl2Parser::JumpStatementContext>(0);
}

Pcl2Parser::UnaryStatementContext* Pcl2Parser::StatementContext::unaryStatement() {
  return getRuleContext<Pcl2Parser::UnaryStatementContext>(0);
}

tree::TerminalNode* Pcl2Parser::StatementContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}


size_t Pcl2Parser::StatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleStatement;
}

void Pcl2Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void Pcl2Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any Pcl2Parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::StatementContext* Pcl2Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 28, Pcl2Parser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(153);
      compoundStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(154);
      expressionStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(155);
      selectionStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(156);
      iterationStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(157);
      assignmentStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(158);
      jumpStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(159);
      unaryStatement();
      setState(160);
      match(Pcl2Parser::Semi);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryStatementContext ------------------------------------------------------------------

Pcl2Parser::UnaryStatementContext::UnaryStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl2Parser::UnaryStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleUnaryStatement;
}

void Pcl2Parser::UnaryStatementContext::copyFrom(UnaryStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
  this->type_letter = ctx->type_letter;
}

//----------------- UnaryDecrementStatementContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::UnaryDecrementStatementContext::MinusMinus() {
  return getToken(Pcl2Parser::MinusMinus, 0);
}

tree::TerminalNode* Pcl2Parser::UnaryDecrementStatementContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

Pcl2Parser::UnaryDecrementStatementContext::UnaryDecrementStatementContext(UnaryStatementContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::UnaryDecrementStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryDecrementStatement(this);
}
void Pcl2Parser::UnaryDecrementStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryDecrementStatement(this);
}

antlrcpp::Any Pcl2Parser::UnaryDecrementStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitUnaryDecrementStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryIncrementStatementContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::UnaryIncrementStatementContext::PlusPlus() {
  return getToken(Pcl2Parser::PlusPlus, 0);
}

tree::TerminalNode* Pcl2Parser::UnaryIncrementStatementContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

Pcl2Parser::UnaryIncrementStatementContext::UnaryIncrementStatementContext(UnaryStatementContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::UnaryIncrementStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryIncrementStatement(this);
}
void Pcl2Parser::UnaryIncrementStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryIncrementStatement(this);
}

antlrcpp::Any Pcl2Parser::UnaryIncrementStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitUnaryIncrementStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnarySquareStatementContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::UnarySquareStatementContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

tree::TerminalNode* Pcl2Parser::UnarySquareStatementContext::Power() {
  return getToken(Pcl2Parser::Power, 0);
}

Pcl2Parser::UnarySquareStatementContext::UnarySquareStatementContext(UnaryStatementContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::UnarySquareStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnarySquareStatement(this);
}
void Pcl2Parser::UnarySquareStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnarySquareStatement(this);
}

antlrcpp::Any Pcl2Parser::UnarySquareStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitUnarySquareStatement(this);
  else
    return visitor->visitChildren(this);
}
Pcl2Parser::UnaryStatementContext* Pcl2Parser::unaryStatement() {
  UnaryStatementContext *_localctx = _tracker.createInstance<UnaryStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, Pcl2Parser::RuleUnaryStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(174);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<UnaryStatementContext *>(_tracker.createInstance<Pcl2Parser::UnaryIncrementStatementContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(164);
      match(Pcl2Parser::PlusPlus);
      setState(165);
      match(Pcl2Parser::Identifier);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<UnaryStatementContext *>(_tracker.createInstance<Pcl2Parser::UnaryDecrementStatementContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(166);
      match(Pcl2Parser::MinusMinus);
      setState(167);
      match(Pcl2Parser::Identifier);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<UnaryStatementContext *>(_tracker.createInstance<Pcl2Parser::UnaryIncrementStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(168);
      match(Pcl2Parser::Identifier);
      setState(169);
      match(Pcl2Parser::PlusPlus);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<UnaryStatementContext *>(_tracker.createInstance<Pcl2Parser::UnaryDecrementStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(170);
      match(Pcl2Parser::Identifier);
      setState(171);
      match(Pcl2Parser::MinusMinus);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<UnaryStatementContext *>(_tracker.createInstance<Pcl2Parser::UnarySquareStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(172);
      match(Pcl2Parser::Identifier);
      setState(173);
      match(Pcl2Parser::Power);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

Pcl2Parser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

Pcl2Parser::AssignmentExpressionContext* Pcl2Parser::AssignmentStatementContext::assignmentExpression() {
  return getRuleContext<Pcl2Parser::AssignmentExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::AssignmentStatementContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}


size_t Pcl2Parser::AssignmentStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleAssignmentStatement;
}

void Pcl2Parser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void Pcl2Parser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}


antlrcpp::Any Pcl2Parser::AssignmentStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAssignmentStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::AssignmentStatementContext* Pcl2Parser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, Pcl2Parser::RuleAssignmentStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    assignmentExpression();
    setState(177);
    match(Pcl2Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

Pcl2Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::ExpressionStatementContext::Semi() {
  return getToken(Pcl2Parser::Semi, 0);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::ExpressionStatementContext::expression() {
  return getRuleContext<Pcl2Parser::ExpressionContext>(0);
}


size_t Pcl2Parser::ExpressionStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleExpressionStatement;
}

void Pcl2Parser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void Pcl2Parser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}


antlrcpp::Any Pcl2Parser::ExpressionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitExpressionStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ExpressionStatementContext* Pcl2Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, Pcl2Parser::RuleExpressionStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 37) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 37)) & ((1ULL << (Pcl2Parser::LeftParen - 37))
      | (1ULL << (Pcl2Parser::IntegerConstant - 37))
      | (1ULL << (Pcl2Parser::FloatConstant - 37))
      | (1ULL << (Pcl2Parser::Identifier - 37)))) != 0)) {
      setState(179);
      expression(0);
    }
    setState(182);
    match(Pcl2Parser::Semi);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SelectionStatementContext ------------------------------------------------------------------

Pcl2Parser::SelectionStatementContext::SelectionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::SelectionStatementContext::If() {
  return getToken(Pcl2Parser::If, 0);
}

tree::TerminalNode* Pcl2Parser::SelectionStatementContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::SelectionStatementContext::conditionalExpression() {
  return getRuleContext<Pcl2Parser::ConditionalExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::SelectionStatementContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

Pcl2Parser::StatementContext* Pcl2Parser::SelectionStatementContext::statement() {
  return getRuleContext<Pcl2Parser::StatementContext>(0);
}


size_t Pcl2Parser::SelectionStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleSelectionStatement;
}

void Pcl2Parser::SelectionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSelectionStatement(this);
}

void Pcl2Parser::SelectionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSelectionStatement(this);
}


antlrcpp::Any Pcl2Parser::SelectionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitSelectionStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::SelectionStatementContext* Pcl2Parser::selectionStatement() {
  SelectionStatementContext *_localctx = _tracker.createInstance<SelectionStatementContext>(_ctx, getState());
  enterRule(_localctx, 36, Pcl2Parser::RuleSelectionStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(Pcl2Parser::If);
    setState(185);
    match(Pcl2Parser::LeftParen);
    setState(186);
    conditionalExpression(0);
    setState(187);
    match(Pcl2Parser::RightParen);
    setState(188);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IterationStatementContext ------------------------------------------------------------------

Pcl2Parser::IterationStatementContext::IterationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::IterationStatementContext::While() {
  return getToken(Pcl2Parser::While, 0);
}

tree::TerminalNode* Pcl2Parser::IterationStatementContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::IterationStatementContext::conditionalExpression() {
  return getRuleContext<Pcl2Parser::ConditionalExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::IterationStatementContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

Pcl2Parser::StatementContext* Pcl2Parser::IterationStatementContext::statement() {
  return getRuleContext<Pcl2Parser::StatementContext>(0);
}


size_t Pcl2Parser::IterationStatementContext::getRuleIndex() const {
  return Pcl2Parser::RuleIterationStatement;
}

void Pcl2Parser::IterationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIterationStatement(this);
}

void Pcl2Parser::IterationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIterationStatement(this);
}


antlrcpp::Any Pcl2Parser::IterationStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitIterationStatement(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::IterationStatementContext* Pcl2Parser::iterationStatement() {
  IterationStatementContext *_localctx = _tracker.createInstance<IterationStatementContext>(_ctx, getState());
  enterRule(_localctx, 38, Pcl2Parser::RuleIterationStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(Pcl2Parser::While);
    setState(191);
    match(Pcl2Parser::LeftParen);
    setState(192);
    conditionalExpression(0);
    setState(193);
    match(Pcl2Parser::RightParen);
    setState(194);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpressionContext ------------------------------------------------------------------

Pcl2Parser::PrimaryExpressionContext::PrimaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::PrimaryExpressionContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

tree::TerminalNode* Pcl2Parser::PrimaryExpressionContext::IntegerConstant() {
  return getToken(Pcl2Parser::IntegerConstant, 0);
}

tree::TerminalNode* Pcl2Parser::PrimaryExpressionContext::FloatConstant() {
  return getToken(Pcl2Parser::FloatConstant, 0);
}

tree::TerminalNode* Pcl2Parser::PrimaryExpressionContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::PrimaryExpressionContext::expression() {
  return getRuleContext<Pcl2Parser::ExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::PrimaryExpressionContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}


size_t Pcl2Parser::PrimaryExpressionContext::getRuleIndex() const {
  return Pcl2Parser::RulePrimaryExpression;
}

void Pcl2Parser::PrimaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExpression(this);
}

void Pcl2Parser::PrimaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExpression(this);
}


antlrcpp::Any Pcl2Parser::PrimaryExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitPrimaryExpression(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::PrimaryExpressionContext* Pcl2Parser::primaryExpression() {
  PrimaryExpressionContext *_localctx = _tracker.createInstance<PrimaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 40, Pcl2Parser::RulePrimaryExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case Pcl2Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(196);
        match(Pcl2Parser::Identifier);
        break;
      }

      case Pcl2Parser::IntegerConstant: {
        enterOuterAlt(_localctx, 2);
        setState(197);
        match(Pcl2Parser::IntegerConstant);
        break;
      }

      case Pcl2Parser::FloatConstant: {
        enterOuterAlt(_localctx, 3);
        setState(198);
        match(Pcl2Parser::FloatConstant);
        break;
      }

      case Pcl2Parser::LeftParen: {
        enterOuterAlt(_localctx, 4);
        setState(199);
        match(Pcl2Parser::LeftParen);
        setState(200);
        expression(0);
        setState(201);
        match(Pcl2Parser::RightParen);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

Pcl2Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl2Parser::ExpressionContext::getRuleIndex() const {
  return Pcl2Parser::RuleExpression;
}

void Pcl2Parser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
  this->expr_operator = ctx->expr_operator;
  this->type_letter = ctx->type_letter;
  this->expression_type = ctx->expression_type;
}

//----------------- BitExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExpressionContext *> Pcl2Parser::BitExprContext::expression() {
  return getRuleContexts<Pcl2Parser::ExpressionContext>();
}

Pcl2Parser::ExpressionContext* Pcl2Parser::BitExprContext::expression(size_t i) {
  return getRuleContext<Pcl2Parser::ExpressionContext>(i);
}

Pcl2Parser::BitExprContext::BitExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::BitExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitExpr(this);
}
void Pcl2Parser::BitExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitExpr(this);
}

antlrcpp::Any Pcl2Parser::BitExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitBitExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimExprContext ------------------------------------------------------------------

Pcl2Parser::PrimaryExpressionContext* Pcl2Parser::PrimExprContext::primaryExpression() {
  return getRuleContext<Pcl2Parser::PrimaryExpressionContext>(0);
}

Pcl2Parser::PrimExprContext::PrimExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::PrimExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimExpr(this);
}
void Pcl2Parser::PrimExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimExpr(this);
}

antlrcpp::Any Pcl2Parser::PrimExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitPrimExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExpressionContext *> Pcl2Parser::MulDivExprContext::expression() {
  return getRuleContexts<Pcl2Parser::ExpressionContext>();
}

Pcl2Parser::ExpressionContext* Pcl2Parser::MulDivExprContext::expression(size_t i) {
  return getRuleContext<Pcl2Parser::ExpressionContext>(i);
}

Pcl2Parser::MulDivExprContext::MulDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void Pcl2Parser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

antlrcpp::Any Pcl2Parser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddminExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExpressionContext *> Pcl2Parser::AddminExprContext::expression() {
  return getRuleContexts<Pcl2Parser::ExpressionContext>();
}

Pcl2Parser::ExpressionContext* Pcl2Parser::AddminExprContext::expression(size_t i) {
  return getRuleContext<Pcl2Parser::ExpressionContext>(i);
}

Pcl2Parser::AddminExprContext::AddminExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::AddminExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddminExpr(this);
}
void Pcl2Parser::AddminExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddminExpr(this);
}

antlrcpp::Any Pcl2Parser::AddminExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAddminExpr(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::expression() {
   return expression(0);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  Pcl2Parser::ExpressionContext *previousContext = _localctx;
  size_t startState = 42;
  enterRecursionRule(_localctx, 42, Pcl2Parser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<PrimExprContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(206);
    primaryExpression();
    _ctx->stop = _input->LT(-1);
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(217);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(208);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(209);
          dynamic_cast<MulDivExprContext *>(_localctx)->opr = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << Pcl2Parser::Star)
            | (1ULL << Pcl2Parser::Div)
            | (1ULL << Pcl2Parser::Mod))) != 0))) {
            dynamic_cast<MulDivExprContext *>(_localctx)->opr = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(210);
          expression(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddminExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(211);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(212);
          dynamic_cast<AddminExprContext *>(_localctx)->opr = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == Pcl2Parser::Plus

          || _la == Pcl2Parser::Minus)) {
            dynamic_cast<AddminExprContext *>(_localctx)->opr = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(213);
          expression(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BitExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(214);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(215);
          dynamic_cast<BitExprContext *>(_localctx)->opr = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << Pcl2Parser::LeftShift)
            | (1ULL << Pcl2Parser::RightShift)
            | (1ULL << Pcl2Parser::And)
            | (1ULL << Pcl2Parser::Or)
            | (1ULL << Pcl2Parser::Negate)
            | (1ULL << Pcl2Parser::Caret))) != 0))) {
            dynamic_cast<BitExprContext *>(_localctx)->opr = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(216);
          expression(3);
          break;
        }

        } 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalExpressionContext ------------------------------------------------------------------

Pcl2Parser::ConditionalExpressionContext::ConditionalExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t Pcl2Parser::ConditionalExpressionContext::getRuleIndex() const {
  return Pcl2Parser::RuleConditionalExpression;
}

void Pcl2Parser::ConditionalExpressionContext::copyFrom(ConditionalExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->iteration_name = ctx->iteration_name;
  this->opr = ctx->opr;
  this->opcode = ctx->opcode;
}

//----------------- BasicConditionalExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ExpressionContext *> Pcl2Parser::BasicConditionalExprContext::expression() {
  return getRuleContexts<Pcl2Parser::ExpressionContext>();
}

Pcl2Parser::ExpressionContext* Pcl2Parser::BasicConditionalExprContext::expression(size_t i) {
  return getRuleContext<Pcl2Parser::ExpressionContext>(i);
}

tree::TerminalNode* Pcl2Parser::BasicConditionalExprContext::ConditionalOperator() {
  return getToken(Pcl2Parser::ConditionalOperator, 0);
}

Pcl2Parser::BasicConditionalExprContext::BasicConditionalExprContext(ConditionalExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::BasicConditionalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBasicConditionalExpr(this);
}
void Pcl2Parser::BasicConditionalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBasicConditionalExpr(this);
}

antlrcpp::Any Pcl2Parser::BasicConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitBasicConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NegatedConditionalExprContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::NegatedConditionalExprContext::Not() {
  return getToken(Pcl2Parser::Not, 0);
}

tree::TerminalNode* Pcl2Parser::NegatedConditionalExprContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::NegatedConditionalExprContext::conditionalExpression() {
  return getRuleContext<Pcl2Parser::ConditionalExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::NegatedConditionalExprContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

Pcl2Parser::NegatedConditionalExprContext::NegatedConditionalExprContext(ConditionalExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::NegatedConditionalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNegatedConditionalExpr(this);
}
void Pcl2Parser::NegatedConditionalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNegatedConditionalExpr(this);
}

antlrcpp::Any Pcl2Parser::NegatedConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitNegatedConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConnectedConditionalExprContext ------------------------------------------------------------------

std::vector<Pcl2Parser::ConditionalExpressionContext *> Pcl2Parser::ConnectedConditionalExprContext::conditionalExpression() {
  return getRuleContexts<Pcl2Parser::ConditionalExpressionContext>();
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::ConnectedConditionalExprContext::conditionalExpression(size_t i) {
  return getRuleContext<Pcl2Parser::ConditionalExpressionContext>(i);
}

tree::TerminalNode* Pcl2Parser::ConnectedConditionalExprContext::ConditionalConnectOperator() {
  return getToken(Pcl2Parser::ConditionalConnectOperator, 0);
}

Pcl2Parser::ConnectedConditionalExprContext::ConnectedConditionalExprContext(ConditionalExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::ConnectedConditionalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConnectedConditionalExpr(this);
}
void Pcl2Parser::ConnectedConditionalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConnectedConditionalExpr(this);
}

antlrcpp::Any Pcl2Parser::ConnectedConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitConnectedConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesizedConditionalExprContext ------------------------------------------------------------------

tree::TerminalNode* Pcl2Parser::ParenthesizedConditionalExprContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::ParenthesizedConditionalExprContext::conditionalExpression() {
  return getRuleContext<Pcl2Parser::ConditionalExpressionContext>(0);
}

tree::TerminalNode* Pcl2Parser::ParenthesizedConditionalExprContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

Pcl2Parser::ParenthesizedConditionalExprContext::ParenthesizedConditionalExprContext(ConditionalExpressionContext *ctx) { copyFrom(ctx); }

void Pcl2Parser::ParenthesizedConditionalExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesizedConditionalExpr(this);
}
void Pcl2Parser::ParenthesizedConditionalExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesizedConditionalExpr(this);
}

antlrcpp::Any Pcl2Parser::ParenthesizedConditionalExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitParenthesizedConditionalExpr(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::conditionalExpression() {
   return conditionalExpression(0);
}

Pcl2Parser::ConditionalExpressionContext* Pcl2Parser::conditionalExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  Pcl2Parser::ConditionalExpressionContext *_localctx = _tracker.createInstance<ConditionalExpressionContext>(_ctx, parentState);
  Pcl2Parser::ConditionalExpressionContext *previousContext = _localctx;
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, Pcl2Parser::RuleConditionalExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(236);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BasicConditionalExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(223);
      expression(0);
      setState(224);
      match(Pcl2Parser::ConditionalOperator);
      setState(225);
      expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenthesizedConditionalExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(227);
      match(Pcl2Parser::LeftParen);
      setState(228);
      conditionalExpression(0);
      setState(229);
      match(Pcl2Parser::RightParen);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NegatedConditionalExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(231);
      match(Pcl2Parser::Not);
      setState(232);
      match(Pcl2Parser::LeftParen);
      setState(233);
      conditionalExpression(0);
      setState(234);
      match(Pcl2Parser::RightParen);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(243);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ConnectedConditionalExprContext>(_tracker.createInstance<ConditionalExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleConditionalExpression);
        setState(238);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(239);
        match(Pcl2Parser::ConditionalConnectOperator);
        setState(240);
        conditionalExpression(4); 
      }
      setState(245);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignmentExpressionContext ------------------------------------------------------------------

Pcl2Parser::AssignmentExpressionContext::AssignmentExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::AssignmentExpressionContext::Identifier() {
  return getToken(Pcl2Parser::Identifier, 0);
}

tree::TerminalNode* Pcl2Parser::AssignmentExpressionContext::Assign() {
  return getToken(Pcl2Parser::Assign, 0);
}

Pcl2Parser::ExpressionContext* Pcl2Parser::AssignmentExpressionContext::expression() {
  return getRuleContext<Pcl2Parser::ExpressionContext>(0);
}

Pcl2Parser::FunctionReturnContext* Pcl2Parser::AssignmentExpressionContext::functionReturn() {
  return getRuleContext<Pcl2Parser::FunctionReturnContext>(0);
}


size_t Pcl2Parser::AssignmentExpressionContext::getRuleIndex() const {
  return Pcl2Parser::RuleAssignmentExpression;
}

void Pcl2Parser::AssignmentExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentExpression(this);
}

void Pcl2Parser::AssignmentExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentExpression(this);
}


antlrcpp::Any Pcl2Parser::AssignmentExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitAssignmentExpression(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::AssignmentExpressionContext* Pcl2Parser::assignmentExpression() {
  AssignmentExpressionContext *_localctx = _tracker.createInstance<AssignmentExpressionContext>(_ctx, getState());
  enterRule(_localctx, 46, Pcl2Parser::RuleAssignmentExpression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(252);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(246);
      match(Pcl2Parser::Identifier);
      setState(247);
      match(Pcl2Parser::Assign);
      setState(248);
      expression(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      match(Pcl2Parser::Identifier);
      setState(250);
      match(Pcl2Parser::Assign);
      setState(251);
      functionReturn();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterTypeListContext ------------------------------------------------------------------

Pcl2Parser::ParameterTypeListContext::ParameterTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* Pcl2Parser::ParameterTypeListContext::LeftParen() {
  return getToken(Pcl2Parser::LeftParen, 0);
}

tree::TerminalNode* Pcl2Parser::ParameterTypeListContext::RightParen() {
  return getToken(Pcl2Parser::RightParen, 0);
}

std::vector<Pcl2Parser::FunctionDeclarationContext *> Pcl2Parser::ParameterTypeListContext::functionDeclaration() {
  return getRuleContexts<Pcl2Parser::FunctionDeclarationContext>();
}

Pcl2Parser::FunctionDeclarationContext* Pcl2Parser::ParameterTypeListContext::functionDeclaration(size_t i) {
  return getRuleContext<Pcl2Parser::FunctionDeclarationContext>(i);
}

std::vector<tree::TerminalNode *> Pcl2Parser::ParameterTypeListContext::Comma() {
  return getTokens(Pcl2Parser::Comma);
}

tree::TerminalNode* Pcl2Parser::ParameterTypeListContext::Comma(size_t i) {
  return getToken(Pcl2Parser::Comma, i);
}


size_t Pcl2Parser::ParameterTypeListContext::getRuleIndex() const {
  return Pcl2Parser::RuleParameterTypeList;
}

void Pcl2Parser::ParameterTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterTypeList(this);
}

void Pcl2Parser::ParameterTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<Pcl2Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterTypeList(this);
}


antlrcpp::Any Pcl2Parser::ParameterTypeListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<Pcl2Visitor*>(visitor))
    return parserVisitor->visitParameterTypeList(this);
  else
    return visitor->visitChildren(this);
}

Pcl2Parser::ParameterTypeListContext* Pcl2Parser::parameterTypeList() {
  ParameterTypeListContext *_localctx = _tracker.createInstance<ParameterTypeListContext>(_ctx, getState());
  enterRule(_localctx, 48, Pcl2Parser::RuleParameterTypeList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    match(Pcl2Parser::LeftParen);
    setState(263);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << Pcl2Parser::Char)
      | (1ULL << Pcl2Parser::Bool)
      | (1ULL << Pcl2Parser::Double)
      | (1ULL << Pcl2Parser::Float)
      | (1ULL << Pcl2Parser::Int)
      | (1ULL << Pcl2Parser::Void))) != 0)) {
      setState(255);
      functionDeclaration();
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == Pcl2Parser::Comma) {
        setState(256);
        match(Pcl2Parser::Comma);
        setState(257);
        functionDeclaration();
        setState(262);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(265);
    match(Pcl2Parser::RightParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool Pcl2Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return translationUnitSempred(dynamic_cast<TranslationUnitContext *>(context), predicateIndex);
    case 12: return blockItemListSempred(dynamic_cast<BlockItemListContext *>(context), predicateIndex);
    case 21: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 22: return conditionalExpressionSempred(dynamic_cast<ConditionalExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::translationUnitSempred(TranslationUnitContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::blockItemListSempred(BlockItemListContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 4);
    case 3: return precpred(_ctx, 3);
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool Pcl2Parser::conditionalExpressionSempred(ConditionalExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> Pcl2Parser::_decisionToDFA;
atn::PredictionContextCache Pcl2Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN Pcl2Parser::_atn;
std::vector<uint16_t> Pcl2Parser::_serializedATN;

std::vector<std::string> Pcl2Parser::_ruleNames = {
  "compilationUnit", "translationUnit", "externalDeclaration", "functionDefinition", 
  "functionDeclaration", "declaration", "typeSpecifier", "functionCall", 
  "functionReturn", "jumpStatement", "identifierList", "compoundStatement", 
  "blockItemList", "blockItem", "statement", "unaryStatement", "assignmentStatement", 
  "expressionStatement", "selectionStatement", "iterationStatement", "primaryExpression", 
  "expression", "conditionalExpression", "assignmentExpression", "parameterTypeList"
};

std::vector<std::string> Pcl2Parser::_literalNames = {
  "", "", "", "'??'", "'@'", "'**'", "'_'", "'namespace'", "'::'", "'string'", 
  "'break'", "'case'", "'char'", "'const'", "'continue'", "'bool'", "'default'", 
  "'double'", "'else'", "'extern'", "'float'", "'for'", "'if'", "'int'", 
  "'uint32_t'", "'int32_t'", "'long'", "'return'", "'short'", "'signed'", 
  "'sizeof'", "'static'", "'switch'", "'typedef'", "'unsigned'", "'void'", 
  "'while'", "'('", "')'", "'['", "']'", "'{'", "'}'", "'<'", "'<='", "'>'", 
  "'>='", "'<<'", "'>>'", "'+'", "'++'", "'-'", "'--'", "'*'", "'/'", "'%'", 
  "'&'", "'|'", "'~'", "'^'", "'?'", "':'", "';'", "','", "'='", "'*='", 
  "'/='", "'%='", "'+='", "'-='", "'<<='", "'>>='", "'&='", "'^='", "'|='", 
  "'~='", "'->'", "'.'", "'...'"
};

std::vector<std::string> Pcl2Parser::_symbolicNames = {
  "", "ConditionalConnectOperator", "ConditionalOperator", "Coalescing", 
  "Bit", "Power", "IgnoreWildCard", "Namespace", "ScopeResolution", "String", 
  "Break", "Case", "Char", "Const", "Continue", "Bool", "Default", "Double", 
  "Else", "Extern", "Float", "For", "If", "Int", "Uint32", "Int32", "Long", 
  "Return", "Short", "Signed", "Sizeof", "Static", "Switch", "Typedef", 
  "Unsigned", "Void", "While", "LeftParen", "RightParen", "LeftBracket", 
  "RightBracket", "LeftBrace", "RightBrace", "Less", "LessEqual", "Greater", 
  "GreaterEqual", "LeftShift", "RightShift", "Plus", "PlusPlus", "Minus", 
  "MinusMinus", "Star", "Div", "Mod", "And", "Or", "Negate", "Caret", "Question", 
  "Colon", "Semi", "Comma", "Assign", "StarAssign", "DivAssign", "ModAssign", 
  "PlusAssign", "MinusAssign", "LeftShiftAssign", "RightShiftAssign", "AndAssign", 
  "XorAssign", "OrAssign", "NegateAssign", "Arrow", "Dot", "Ellipsis", "IntegerConstant", 
  "FloatConstant", "AndAnd", "OrOr", "Not", "Equal", "NotEqual", "Identifier", 
  "Whitespace", "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary Pcl2Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> Pcl2Parser::_tokenNames;

Pcl2Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5c, 0x10e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x3, 0x2, 0x5, 0x2, 
    0x36, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x3f, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x42, 0xb, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x47, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x55, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x58, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x60, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x63, 
    0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x67, 0xa, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x6e, 0xa, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x76, 0xa, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7c, 0xa, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x83, 0xa, 
    0xc, 0xc, 0xc, 0xe, 0xc, 0x86, 0xb, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 
    0x8a, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0x93, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x96, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9a, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xa5, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0xb1, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x5, 0x13, 0xb7, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xce, 0xa, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 
    0xdc, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0xdf, 0xb, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x5, 
    0x18, 0xef, 0xa, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x7, 0x18, 0xf4, 
    0xa, 0x18, 0xc, 0x18, 0xe, 0x18, 0xf7, 0xb, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xff, 0xa, 0x19, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 0x105, 0xa, 0x1a, 
    0xc, 0x1a, 0xe, 0x1a, 0x108, 0xb, 0x1a, 0x5, 0x1a, 0x10a, 0xa, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x2, 0x6, 0x4, 0x1a, 0x2c, 0x2e, 0x1b, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 
    0x2, 0x6, 0x8, 0x2, 0xe, 0xe, 0x11, 0x11, 0x13, 0x13, 0x16, 0x16, 0x19, 
    0x19, 0x25, 0x25, 0x3, 0x2, 0x37, 0x39, 0x4, 0x2, 0x33, 0x33, 0x35, 
    0x35, 0x4, 0x2, 0x31, 0x32, 0x3a, 0x3d, 0x2, 0x119, 0x2, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x4, 0x39, 0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x8, 0x48, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xc, 
    0x66, 0x3, 0x2, 0x2, 0x2, 0xe, 0x68, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x12, 0x72, 0x3, 0x2, 0x2, 0x2, 0x14, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x20, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xb6, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0xba, 0x3, 0x2, 0x2, 0x2, 0x28, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x32, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x36, 0x5, 0x4, 0x3, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x38, 0x7, 0x2, 0x2, 0x3, 0x38, 0x3, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x8, 0x3, 0x1, 0x2, 0x3a, 0x3b, 0x5, 0x6, 0x4, 0x2, 0x3b, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0xc, 0x3, 0x2, 0x2, 0x3d, 0x3f, 0x5, 
    0x6, 0x4, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x47, 0x5, 0x8, 0x5, 0x2, 0x44, 0x47, 0x5, 0xc, 0x7, 0x2, 0x45, 
    0x47, 0x7, 0x40, 0x2, 0x2, 0x46, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x49, 0x5, 0xe, 0x8, 0x2, 0x49, 0x4a, 0x7, 0x58, 
    0x2, 0x2, 0x4a, 0x4b, 0x5, 0x32, 0x1a, 0x2, 0x4b, 0x4c, 0x5, 0x18, 0xd, 
    0x2, 0x4c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x5, 0xe, 0x8, 0x2, 
    0x4e, 0x4f, 0x7, 0x58, 0x2, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x51, 0x5, 0xe, 0x8, 0x2, 0x51, 0x56, 0x7, 0x58, 0x2, 0x2, 0x52, 0x53, 
    0x7, 0x41, 0x2, 0x2, 0x53, 0x55, 0x7, 0x58, 0x2, 0x2, 0x54, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x58, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x40, 0x2, 0x2, 
    0x5a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 
    0x61, 0x5, 0x30, 0x19, 0x2, 0x5d, 0x5e, 0x7, 0x41, 0x2, 0x2, 0x5e, 0x60, 
    0x5, 0x30, 0x19, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x62, 0x64, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x65, 0x7, 0x40, 0x2, 0x2, 0x65, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x50, 0x3, 0x2, 0x2, 0x2, 0x66, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x9, 0x2, 0x2, 0x2, 0x69, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x58, 0x2, 0x2, 0x6b, 0x6d, 0x7, 
    0x27, 0x2, 0x2, 0x6c, 0x6e, 0x5, 0x16, 0xc, 0x2, 0x6d, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x6f, 0x70, 0x7, 0x28, 0x2, 0x2, 0x70, 0x71, 0x7, 0x40, 0x2, 0x2, 
    0x71, 0x11, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x58, 0x2, 0x2, 0x73, 
    0x75, 0x7, 0x27, 0x2, 0x2, 0x74, 0x76, 0x5, 0x16, 0xc, 0x2, 0x75, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x28, 0x2, 0x2, 0x78, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x79, 0x7b, 0x7, 0x1d, 0x2, 0x2, 0x7a, 0x7c, 0x5, 0x2c, 0x17, 
    0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x40, 0x2, 0x2, 0x7e, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x84, 0x7, 0x58, 0x2, 0x2, 0x80, 0x81, 
    0x7, 0x41, 0x2, 0x2, 0x81, 0x83, 0x7, 0x58, 0x2, 0x2, 0x82, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x7, 0x2b, 0x2, 0x2, 
    0x88, 0x8a, 0x5, 0x1a, 0xe, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 
    0x7, 0x2c, 0x2, 0x2, 0x8c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x8, 
    0xe, 0x1, 0x2, 0x8e, 0x8f, 0x5, 0x1c, 0xf, 0x2, 0x8f, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0xc, 0x3, 0x2, 0x2, 0x91, 0x93, 0x5, 0x1c, 0xf, 
    0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9a, 
    0x5, 0x1e, 0x10, 0x2, 0x98, 0x9a, 0x5, 0xc, 0x7, 0x2, 0x99, 0x97, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0xa5, 0x5, 0x18, 0xd, 0x2, 0x9c, 0xa5, 0x5, 0x24, 0x13, 
    0x2, 0x9d, 0xa5, 0x5, 0x26, 0x14, 0x2, 0x9e, 0xa5, 0x5, 0x28, 0x15, 
    0x2, 0x9f, 0xa5, 0x5, 0x22, 0x12, 0x2, 0xa0, 0xa5, 0x5, 0x14, 0xb, 0x2, 
    0xa1, 0xa2, 0x5, 0x20, 0x11, 0x2, 0xa2, 0xa3, 0x7, 0x40, 0x2, 0x2, 0xa3, 
    0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x9e, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa0, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0xa6, 0xa7, 0x7, 0x34, 0x2, 0x2, 0xa7, 0xb1, 0x7, 0x58, 0x2, 0x2, 
    0xa8, 0xa9, 0x7, 0x36, 0x2, 0x2, 0xa9, 0xb1, 0x7, 0x58, 0x2, 0x2, 0xaa, 
    0xab, 0x7, 0x58, 0x2, 0x2, 0xab, 0xb1, 0x7, 0x34, 0x2, 0x2, 0xac, 0xad, 
    0x7, 0x58, 0x2, 0x2, 0xad, 0xb1, 0x7, 0x36, 0x2, 0x2, 0xae, 0xaf, 0x7, 
    0x58, 0x2, 0x2, 0xaf, 0xb1, 0x7, 0x7, 0x2, 0x2, 0xb0, 0xa6, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xb0, 0xac, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x30, 0x19, 0x2, 0xb3, 
    0xb4, 0x7, 0x40, 0x2, 0x2, 0xb4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 
    0x5, 0x2c, 0x17, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x40, 
    0x2, 0x2, 0xb9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x7, 0x18, 0x2, 
    0x2, 0xbb, 0xbc, 0x7, 0x27, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x2e, 0x18, 0x2, 
    0xbd, 0xbe, 0x7, 0x28, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x1e, 0x10, 0x2, 0xbf, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x7, 0x26, 0x2, 0x2, 0xc1, 0xc2, 
    0x7, 0x27, 0x2, 0x2, 0xc2, 0xc3, 0x5, 0x2e, 0x18, 0x2, 0xc3, 0xc4, 0x7, 
    0x28, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x1e, 0x10, 0x2, 0xc5, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xce, 0x7, 0x58, 0x2, 0x2, 0xc7, 0xce, 0x7, 0x51, 0x2, 
    0x2, 0xc8, 0xce, 0x7, 0x52, 0x2, 0x2, 0xc9, 0xca, 0x7, 0x27, 0x2, 0x2, 
    0xca, 0xcb, 0x5, 0x2c, 0x17, 0x2, 0xcb, 0xcc, 0x7, 0x28, 0x2, 0x2, 0xcc, 
    0xce, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc7, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x8, 0x17, 
    0x1, 0x2, 0xd0, 0xd1, 0x5, 0x2a, 0x16, 0x2, 0xd1, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0xd2, 0xd3, 0xc, 0x6, 0x2, 0x2, 0xd3, 0xd4, 0x9, 0x3, 0x2, 0x2, 
    0xd4, 0xdc, 0x5, 0x2c, 0x17, 0x7, 0xd5, 0xd6, 0xc, 0x5, 0x2, 0x2, 0xd6, 
    0xd7, 0x9, 0x4, 0x2, 0x2, 0xd7, 0xdc, 0x5, 0x2c, 0x17, 0x6, 0xd8, 0xd9, 
    0xc, 0x4, 0x2, 0x2, 0xd9, 0xda, 0x9, 0x5, 0x2, 0x2, 0xda, 0xdc, 0x5, 
    0x2c, 0x17, 0x5, 0xdb, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xe1, 0x8, 0x18, 0x1, 0x2, 0xe1, 0xe2, 0x5, 0x2c, 0x17, 0x2, 0xe2, 0xe3, 
    0x7, 0x4, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x2c, 0x17, 0x2, 0xe4, 0xef, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x27, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x2e, 
    0x18, 0x2, 0xe7, 0xe8, 0x7, 0x28, 0x2, 0x2, 0xe8, 0xef, 0x3, 0x2, 0x2, 
    0x2, 0xe9, 0xea, 0x7, 0x55, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x27, 0x2, 0x2, 
    0xeb, 0xec, 0x5, 0x2e, 0x18, 0x2, 0xec, 0xed, 0x7, 0x28, 0x2, 0x2, 0xed, 
    0xef, 0x3, 0x2, 0x2, 0x2, 0xee, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xee, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0xee, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf5, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0xc, 0x5, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x3, 
    0x2, 0x2, 0xf2, 0xf4, 0x5, 0x2e, 0x18, 0x6, 0xf3, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf3, 0x3, 0x2, 0x2, 0x2, 
    0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf7, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x58, 0x2, 0x2, 0xf9, 0xfa, 
    0x7, 0x42, 0x2, 0x2, 0xfa, 0xff, 0x5, 0x2c, 0x17, 0x2, 0xfb, 0xfc, 0x7, 
    0x58, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x42, 0x2, 0x2, 0xfd, 0xff, 0x5, 0x12, 
    0xa, 0x2, 0xfe, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0x31, 0x3, 0x2, 0x2, 0x2, 0x100, 0x109, 0x7, 0x27, 0x2, 0x2, 
    0x101, 0x106, 0x5, 0xa, 0x6, 0x2, 0x102, 0x103, 0x7, 0x41, 0x2, 0x2, 
    0x103, 0x105, 0x5, 0xa, 0x6, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x105, 0x108, 0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x106, 0x3, 0x2, 0x2, 0x2, 0x109, 0x101, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x10c, 0x7, 0x28, 0x2, 0x2, 0x10c, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x1a, 0x35, 0x40, 0x46, 0x56, 0x61, 0x66, 0x6d, 0x75, 0x7b, 0x84, 0x89, 
    0x94, 0x99, 0xa4, 0xb0, 0xb6, 0xcd, 0xdb, 0xdd, 0xee, 0xf5, 0xfe, 0x106, 
    0x109, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

Pcl2Parser::Initializer Pcl2Parser::_init;
