@class NSMutableDictionary, NSDictionary, NSString, IESLiveTaskParam;
@protocol IESLiveRebornGiftAnimationProvider, IESLiveGiftFullLinkMonitor;

@interface IESLiveGiftQueueSection : NSObject <IESLiveAutoRotateAction>

@property (nonatomic) BOOL enablePromoteAssetsUsedRecord;
@property (nonatomic) BOOL disableIPadGiftAnimation;
@property (nonatomic) BOOL nonInteractiveGiftDequeueDisabled;
@property (retain, nonatomic) NSMutableDictionary *typeQueueDict;
@property (weak, nonatomic) id<IESLiveRebornGiftAnimationProvider> provider;
@property (weak, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (retain, nonatomic) IESLiveTaskParam *taskParam;
@property (retain, nonatomic) NSDictionary *taskConfig;
@property (retain, nonatomic) NSString *currentTaskID;
@property (nonatomic) BOOL isPlayingAnimation;
@property (nonatomic) long long receivedGiftCount;
@property (nonatomic) long long receivedGiftWithEffectCount;
@property (nonatomic) long long sendBySelfBigGiftCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)willAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)disableNonInteractiveGiftDequeueAndStopCurrentEffect:(BOOL)a0;
- (void)resumeNonInteractiveGiftDequeue;
- (unsigned long long)enqueueWithNode:(id)a0;
- (void)clearAllNodes;
- (void)updateSendTogetherAssetSlotInfo:(id)a0;
- (unsigned long long)togetherNodeCountWithAssetID:(id)a0;
- (void)dispatchFakeGiftViewWithModel:(id)a0;
- (void)clearAllOtherNodes;
- (void)startQueueWith:(id)a0;
- (void)clearSmallNodes;
- (void)dispatchNodes:(id)a0 isFromGiftMessage:(BOOL)a1;
- (void)checkQueueForGiftView;
- (void)checkQueueForGiftAnimation;
- (id)queueWithType:(unsigned long long)a0;
- (void)startAnimationQueueWith:(id)a0;
- (unsigned long long)typeForNode:(id)a0;
- (void)enqueueGiftViewQueueWithNode:(id)a0;
- (void)enqueueGiftAnimationQueueWithNode:(id)a0;
- (BOOL)trayNotBannedForNode:(id)a0;
- (void)_recordLogIForBannedTray:(id)a0;
- (BOOL)effectNotBannedForNode:(id)a0;
- (BOOL)effectNotBannedForStrategy:(id)a0;
- (void)_recordLogIForBannedEffect:(id)a0;
- (void).cxx_destruct;

@end
