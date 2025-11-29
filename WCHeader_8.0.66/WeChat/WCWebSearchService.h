@class CMessageWrap, NSString, NSArray, WCImageSearchEntity, WCWebSearchSyncLogic, NSMutableDictionary, WCTextSearchEntity, _TtC6WeChat19ReusablePageManager, WCFingertipSearchReportModel;

@interface WCWebSearchService : WSTemplateBaseMgr <MMMenuControllerExt, IWSSearchUtilExtension, YYWebviewProtectorExtension>

@property (retain, nonatomic) _TtC6WeChat19ReusablePageManager *reusableWebPageManager;
@property (retain, nonatomic) NSArray *blackListHostForSearch;
@property (retain, nonatomic) WCWebSearchSyncLogic *searchSyncLogic;
@property (retain, nonatomic) CMessageWrap *sessionMsgWrap;
@property (retain, nonatomic) WCFingertipSearchReportModel *fingertipSearchReportModel;
@property (retain, nonatomic) WCTextSearchEntity *sessionTextSearchEntity;
@property (retain, nonatomic) WCImageSearchEntity *sessionImageSearchEntity;
@property (retain, nonatomic) WCImageSearchEntity *originImageSearchEntity;
@property (retain, nonatomic) NSMutableDictionary *liteAppSessionIdDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)FingertipSearchExpressHintWord;
+ (BOOL)IsFingertipSearchScene:(unsigned long long)a0;
+ (BOOL)IsImageSearchScene:(unsigned long long)a0;

- (id)init;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (id)exptBlackListHostForSearch;
- (id)defaultBlackListHostForSearch;
- (BOOL)shouldShowTimelineResult;
- (BOOL)shouldShowSearchEntryInDiscover;
- (BOOL)shouldEnableSearchSync;
- (void)syncForEnterWebSearch;
- (void)syncForExposeReplace;
- (void)syncForPersonalMsgEventNewMsg;
- (void)syncForPersonalMsgEventReadMsg;
- (void)syncForPersonalMsgEventDelMsg;
- (void)syncWithActionNotifyData:(id)a0;
- (void)syncForEnterDiscovery;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned int)packageResouceSubType;
- (unsigned long long)localJSBizType;
- (void)reloadPackageConfig:(unsigned long long)a0;
- (void)onMenuControllerDidShow;
- (void)onCloseSearchPreloadWebview;
- (void)appDidTerminateWKWebviewNetworkProcess;
- (void).cxx_destruct;

@end
