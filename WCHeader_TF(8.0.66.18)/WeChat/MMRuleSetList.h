@class NSString, NSMutableDictionary;

@interface MMRuleSetList : NSObject <MCssParserDelegate> {
    BOOL m_isAlreadyParsed;
    BOOL m_isParseOK;
    BOOL m_isParseError;
}

@property (retain, nonatomic) NSMutableDictionary *ruleSets;
@property (retain, nonatomic) NSString *styleSheetFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRuleSet:(id)a0 forKey:(id)a1;
- (void)removeRuleSetForKey:(id)a0;
- (id)getRuleSetForSeletor:(id)a0;
- (id)getValueOfProperty:(id)a0 forSeletor:(id)a1;
- (void)addOrMergeRuleSet:(id)a0 forSelector:(id)a1;
- (id)init;
- (void)onScriptFunctionWithSelectors:(id)a0 withStatements:(id)a1;
- (void)onReceiveCssRulesetWithSelectors:(id)a0 withDeclarations:(id)a1;
- (void)onParseErrorInFile:(id)a0 onLineNumber:(id)a1 withText:(id)a2 withErrorMessage:(id)a3;
- (id)onNextCssFile;
- (void)onCssParseStart;
- (void)onCssParseEnd;
- (BOOL)startParse;
- (BOOL)loadRuleSetsFromPath:(id)a0;
- (void)clearAllRuleSets;
- (void).cxx_destruct;

@end
