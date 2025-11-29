@class NSMutableDictionary, NSString, NSHashTable, WCCSSStyleExecuter, MMRuleSetList;

@interface WCCSSMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicCssClass;
@property (retain, nonatomic) WCCSSStyleExecuter *styleExecuter;
@property (retain, nonatomic) MMRuleSetList *ruleSetList;
@property (retain, nonatomic) NSHashTable *hashTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getStylesWithClass:(id)a0;
- (id)getStylesDicWithClass:(id)a0;
- (void)applyRules:(id)a0 ToTarget:(id)a1;
- (void)addHotReloaderTarger:(id)a0;
- (void)parseNewStyleCss;
- (void)reloadAllViewCssStyle;
- (void)onFileChange:(id)a0;
- (void).cxx_destruct;

@end
