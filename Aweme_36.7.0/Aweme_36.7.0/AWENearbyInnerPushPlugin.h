@class AWENeabyGrouponAsyncUpdateModuleModel, AWENearbyInnerPushConfigDataModel, NSTimer, NSString;

@interface AWENearbyInnerPushPlugin : AWENearbyGrouponFeedBasePlugin <AWENearbyContainerEventMessage, AWENearbyC2FeedEventMessage, AWENearbyTaskInnerPushMessage>

@property (retain, nonatomic) AWENeabyGrouponAsyncUpdateModuleModel *asyncUpdateModuleModel;
@property (retain, nonatomic) AWENearbyInnerPushConfigDataModel *innerPushConfigData;
@property (nonatomic) double lastTouchGrouponTimeStamp;
@property (retain, nonatomic) NSTimer *requestTimer;
@property (nonatomic) BOOL isFirstRequestAfterHomepageRefreshed;
@property (nonatomic) double lastRequestTimeStamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowInnerPush;
- (void)bindObserver;
- (id)initWithPageContext:(id)a0;
- (void)nearbyContainerDidDisappear;
- (void)nearbyDidEnterTab;
- (void)nearbyC2FeedWillRefreshedWithContext:(id)a0;
- (void)nearbylifeC2PageFetchFinish:(id)a0 resource:(id)a1 refreshContext:(id)a2 isRefresh:(BOOL)a3;
- (void)registerInjectMessage;
- (void)cancelInnerPushInfoRequestTimerWithReason:(id)a0;
- (void)startInnerPushInfoRequestIfNeed;
- (void)tech_trackInnerPushFailedMonitorWithAction:(id)a0 failedReason:(id)a1;
- (void)tech_trackInnerPushMonitorWithAction:(id)a0 extraParams:(id)a1;
- (void)commitInnerPushTaskWithModel:(id)a0;
- (void)startInnerPushInfoRequestTimer;
- (void)showInnerPushTaskWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
