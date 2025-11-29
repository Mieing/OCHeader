@class NSString, NSRecursiveLock;
@protocol MCssParserDelegate;

@interface MCssParser : NSObject {
    id<MCssParserDelegate> m_delegate;
    NSRecursiveLock *m_oLock;
    NSString *m_currentFile;
}

+ (void)initialize;
+ (id)sharedCssParser;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (void)safeCloseCssFile;
- (BOOL)openNextCssFile;
- (void)cleanUpLexer;
- (void)startParseCssFiles;
- (BOOL)onParseNextFile;
- (void)onParseErrorOnLineNumber:(id)a0 withText:(id)a1 withErrorMessage:(id)a2;
- (void)onCssRuleSetWithSelectors:(id)a0 withDeclarations:(id)a1;
- (void)onScriptFunctionWithSelectors:(id)a0 withStatements:(id)a1;
- (BOOL)isParsing;
- (void)startWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
