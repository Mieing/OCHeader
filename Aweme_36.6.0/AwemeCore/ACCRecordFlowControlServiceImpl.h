@class ACCCameraSubscription, NSMapTable, NSMutableDictionary, ACCRecordFlowStageStrategy, NSString;
@protocol AWERecordFlowSourceService, IESServiceProvider;

@interface ACCRecordFlowControlServiceImpl : NSObject <ACCRecordFlowControlService>

@property (retain, nonatomic) id<AWERecordFlowSourceService> flowSource;
@property (retain, nonatomic) NSMapTable *handlers;
@property (retain, nonatomic) NSMutableDictionary *flowSubscribers;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) ACCRecordFlowStageStrategy *strategy;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) unsigned long long flowControlType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceDidUpdateDuration:(double)a0;
- (void)flowServiceDidMarkDuration:(double)a0;
- (void)flowServiceDidRemoveLastSegment:(BOOL)a0;
- (void)flowServiceWillAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidRemoveAllSegment;
- (void)flowServiceDurationHasRestored;
- (void)flowServiceDidTakePicture:(id)a0 error:(id)a1;
- (void)flowServiceDidSystemLivePhotoWithPicture:(id)a0 videoData:(id)a1 error:(id)a2;
- (BOOL)flowServcieShouldStartRecord:(BOOL)a0;
- (void)flowServiceDidCompleteRecord;
- (void)flowServiceWillEnterNextPageWithMode:(id)a0;
- (void)flowServiceDidEnterNextPageWithMode:(id)a0;
- (void)flowServiceStartShowCountDownAnimation:(long long)a0;
- (void)flowServiceCountDownAnimationCompleted;
- (void)registerHandler:(id)a0 forFlowType:(unsigned long long)a1;
- (id)handlerForFlowType:(unsigned long long)a0;
- (void)addFlowServiceSubscriber:(id)a0 forFlowType:(unsigned long long)a1;
- (void)generateStrategy;
- (void)finishRecordFlow;
- (void)notifyStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)notifyDidStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)notifyStopRecordFlow:(unsigned long long)a0;
- (void)notifyCompleteRecordFlow:(unsigned long long)a0;
- (void)notifyHandleTouchBeganWithShootSource:(id)a0;
- (void)notifyHandleTouchHoldWithShootSource:(id)a0;
- (void)notifyHandleTouchEndWithShootSource:(id)a0;
- (id)subscriptionForFlowType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;

@end
