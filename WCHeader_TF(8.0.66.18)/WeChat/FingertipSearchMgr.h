@class ExpressMatcher, NSString, NSHashTable, RegexMatcher, DSMMatcher, FSDSMModelPreparer;

@interface FingertipSearchMgr : MMUserService <MMResourceMgrExt, IFunctionMsgExt, DSMMatcherDelegate, MMServiceProtocol>

@property (retain, nonatomic) ExpressMatcher *expressMatcher;
@property (retain, nonatomic) RegexMatcher *regexMatcher;
@property (retain, nonatomic) NSHashTable *weakVCHashTable;
@property (retain, nonatomic) DSMMatcher *dsm;
@property (retain, nonatomic) FSDSMModelPreparer *dsmPreparer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)changeResourceloadPath;
- (id)extractKeywordsWithContent:(id)a0 version:(id *)a1;
- (id)processContent:(id)a0 pattern:(id)a1;
- (BOOL)hitBlacklist:(id)a0 blackPatternList:(id)a1;
- (id)getRegexConfigResult:(id)a0 config:(id)a1;
- (id)getExpressResult:(id)a0;
- (id)getRegexSearchResult:(id)a0;
- (id)getKeywordsResult:(id)a0;
- (unsigned long long)preGetDSMCacheSize;
- (long long)cleanDSMCache;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)onFunctionMsgResponse:(id)a0 bussinessId:(unsigned long long)a1 functionMsgId:(id)a2;
- (void)onMatchModelErrorHappend;
- (void).cxx_destruct;

@end
