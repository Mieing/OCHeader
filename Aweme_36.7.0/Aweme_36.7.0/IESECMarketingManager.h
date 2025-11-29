@class IESECUserTrackerPageContext, IESECMarketingApi, NSString;

@interface IESECMarketingManager : NSObject <IESECUserTrackerMessage>

@property (retain, nonatomic) IESECMarketingApi *api;
@property (nonatomic) BOOL openWithSaaS;
@property (retain, nonatomic) IESECUserTrackerPageContext *currentPageContext;
@property (retain, nonatomic) IESECUserTrackerPageContext *livePageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (double)getCurrentTimeStamp;
- (void)enterToPage:(id)a0;
- (void)leaveFromPage:(id)a0;
- (void)postAction:(id)a0 type:(long long)a1 atPage:(id)a2;
- (id)fetchActionConfigMap;
- (void)initParamsWithApi:(id)a0;
- (id)actionHistoryWithInfo:(id)a0 config:(id)a1;
- (void)postActionToServerWithHistory:(id)a0;
- (void)refreshStateWithActionHistory:(id)a0;
- (id)getNeedReportRulesWithHistory:(id)a0;
- (id)getRequestParamsWithHistory:(id)a0 rules:(id)a1;
- (BOOL)serverSwitchOnWithHistory:(id)a0 ruleInfo:(id)a1;
- (void)postAction:(id)a0 type:(long long)a1 scene:(id)a2 sceneId:(id)a3 anchorId:(id)a4 api:(id)a5;
- (BOOL)isLoginAweme;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
