@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface MMColor : NSObject <MCssParserDelegate> {
    NSMutableDictionary *m_colorDictionary;
    NSRecursiveLock *m_lock;
    BOOL m_isAlreadyParsed;
    BOOL m_isParseOK;
    NSString *m_colorCssPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onScriptFunctionWithSelectors:(id)a0 withStatements:(id)a1;
- (void)onReceiveCssRulesetWithSelectors:(id)a0 withDeclarations:(id)a1;
- (void)onParseErrorInFile:(id)a0 onLineNumber:(id)a1 withText:(id)a2 withErrorMessage:(id)a3;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (id)getColorByName:(id)a0;
- (id)getColorByName:(id)a0 withAlpha:(double)a1;
- (BOOL)loadColorFromPath:(id)a0;
- (void).cxx_destruct;

@end
