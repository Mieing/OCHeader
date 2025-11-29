@class GCCommonServer, NSMutableDictionary, NSString, WCTTable;

@interface GameLiteAppManager : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dbDataDict;
@property (retain, nonatomic) WCTTable *dbTable;
@property (retain, nonatomic) GCCommonServer *server;
@property (nonatomic) BOOL ignoreGameLiteCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)liteAppConfigModel:(id)a0;
- (id)dbModelFromUrlLiteConf:(id)a0;
- (void)handleLiteConfResponse:(id)a0;
- (id)getDbModelsForUrl:(id)a0;
- (id)innerGetLiteAppConfigDbModel:(id)a0;
- (id)getLiteInfoAndCheckUpateIfNeedWithConfigModel:(id)a0;
- (id)getLiteInfoAndCheckUpateIfNeedWithAppid:(id)a0 pkgId:(id)a1;
- (id)doubleCheckGetLiteAppInfoItemWithPkgId:(id)a0 liteAppId:(id)a1;
- (id)queryDictWithEntryScene:(id)a0 urlStr:(id)a1;
- (id)getViewControllerWithUrl:(id)a0;
- (id)gameChatEntryScene;
- (id)getViewControllerWithUrl:(id)a0 onlyReturnLite:(BOOL)a1 transParentLiteApp:(BOOL)a2;
- (id)getLiteAppViewControllerWithAppInfo:(id)a0 pagePath:(id)a1 queryJsonStr:(id)a2 transParentLiteApp:(BOOL)a3;
- (BOOL)checkPageExists:(id)a0 inLiteAppInfo:(id)a1;
- (id)showHalfScreenWebViewWithConfig:(id)a0 liteAppParam:(id)a1;
- (void)asyncGetLiteAppControllerCheckTopVc:(id)a0 openInfo:(id)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
