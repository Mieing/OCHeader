@class NSString;

@interface AWEShowPaymentService : HTSService <AWEShowPaymentService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAdInsertDelayRequestWithParams:(id)a0 callBack:(id /* block */)a1;
+ (void)addEventHandler:(id)a0;

- (Class)getRewardAdvertisingToolClass;
- (id)createPaymentDetailPageEventHandlerWithIdentifier:(id)a0;
- (Class)getPaymentVideoToolsClass;
- (id)getPaymentEventManager;
- (id)createPaymentEventHandlerWithIdentifier:(id)a0;
- (id)videoTryWatchViewWithViewStyle:(long long)a0 updateStyle:(long long)a1;
- (id)createVideoTryWatchViewWithViewStyle:(long long)a0 updateViewStyle:(long long)a1;
- (Class)getVideoPaymentTrackerClass;
- (Class)rewardedAdvertisingTool;
- (Class)rewardedAdvertisingTracker;
- (Class)entertainmentPaidStreamTool;
- (id)createMultipleEventsView;
- (BOOL)videoPaymentEnableUseBlockStyle;
- (id)allowListPageForNeedFromGroupID;
- (id)blockListPageForNeedPreviousPage;
- (Class)getRewardedAdvertisingTrackerClass;
- (Class)paymentVideoTool;
- (void)requestInsertADForAwemeModel:(id)a0 scene:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
- (void)requestFrisbeeWithAwemeModel:(id)a0 commonParameters:(id)a1 clientParameters:(id)a2 completion:(id /* block */)a3;
- (void)requestSendAdLogWithRequestParameter:(id)a0 completion:(id /* block */)a1;
- (void)requestPlayletADDyeWithParameters:(id)a0 completion:(id /* block */)a1;
- (Class)videoPaymentTracker;
- (id)createVideoTryWatchViewWithUIConfig:(id)a0 updateViewStyle:(long long)a1 tryWatchType:(long long)a2;
- (id)createIAPMaskPresenterWithModel:(id)a0 context:(id)a1;

@end
