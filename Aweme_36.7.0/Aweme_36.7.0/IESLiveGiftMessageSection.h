@class IESLiveGiftBindingGiftMessageInstance, IESLiveGiftRealGiftMessageInstance, IESLiveGiftLightGiftMessageInstance, NSString, IESLiveGiftAssetMessageInstance, NSMutableArray, IESLiveRebornGiftAnimationNodeFactory, IESLiveGiftAssetEffectUtilMessageInstance;
@protocol IESLiveRebornGiftAnimationProvider, IESLiveGiftFullLinkMonitor;

@interface IESLiveGiftMessageSection : NSObject <IESLiveInteractAction>

@property (weak, nonatomic) id<IESLiveRebornGiftAnimationProvider> provider;
@property (retain, nonatomic) IESLiveGiftRealGiftMessageInstance *giftMessageInstance;
@property (retain, nonatomic) IESLiveGiftAssetMessageInstance *assetMessageInstance;
@property (retain, nonatomic) IESLiveGiftAssetEffectUtilMessageInstance *assetEffectUtilMessageInstance;
@property (retain, nonatomic) IESLiveGiftLightGiftMessageInstance *lightGiftMessageInstance;
@property (retain, nonatomic) IESLiveGiftBindingGiftMessageInstance *bindingGiftMessageInstance;
@property (retain, nonatomic) IESLiveRebornGiftAnimationNodeFactory *nodeFactory;
@property (retain, nonatomic) NSMutableArray *pendingGiftMessages;
@property (nonatomic) long long pendingMessageCount;
@property (nonatomic) BOOL disableAddRepeatedAssetID;
@property (nonatomic) BOOL enableFixImageEncode;
@property (nonatomic) long long retryCountLimit;
@property (weak, nonatomic) id<IESLiveGiftFullLinkMonitor> giftFullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentDidMount;
- (void)setupInstance;
- (void)setupSetting;
- (void)startInteractiveWithScene:(unsigned long long)a0;
- (void)endInteractiveWithScene:(unsigned long long)a0;
- (void)dispatchGiftMessage:(id)a0;
- (void)preloadMixFunctionalAssetResources:(id)a0 completion:(id /* block */)a1;
- (void)reportUseLocalGiftWithID:(id)a0 type:(id)a1 clientSource:(id)a2 logID:(id)a3;
- (void)makePendingStructWithResourceID:(id)a0 requiredAssetsArray:(id)a1 message:(id)a2 retryCount:(long long)a3 completion:(id /* block */)a4;
- (void)monitorFindMoreErrorWithType:(long long)a0 giftID:(id)a1 assetID:(id)a2 error:(id)a3;
- (id)giftIDInPendingGiftMessageWithAssetID:(id)a0 checkResourceSupport:(BOOL)a1;
- (void)fullLinkMonitorPendingGiftMessageWithGiftID:(id)a0 andAssetID:(id)a1;
- (void)p_processWithMessageWithEffectID:(long long)a0;
- (void)p_postAllPendingMessages;
- (void)p_postWithRemovedArray:(id)a0;
- (void).cxx_destruct;

@end
