@class NSString, NSMutableSet;
@protocol HTSLiveViewHierarchyProvider, IESLiveGiftGlobalModule, HTSLiveNativeAnimationEventAction, IESLiveScreenModule, IESLiveFaceGiftRouter;

@interface IESLiveGiftRealGiftMessageInstance : IESLiveGiftMessageInstance <IESLiveEffectsDownloadConfigMonitor>

@property (nonatomic) BOOL seriesGiftMessageSplitEnable;
@property (nonatomic) BOOL enableSmallGiftComboLimit;
@property (nonatomic) long long smallGiftComboLimitCount;
@property (nonatomic) BOOL enableGiftMsgReceiverPromoteEffectFetch;
@property (nonatomic) BOOL enableFullLinkAssetPart;
@property (retain, nonatomic) NSString *currentUserID;
@property (retain, nonatomic) NSMutableSet *hasShownSpecialEffectSet;
@property (nonatomic) BOOL enableNewGroupLive;
@property (weak, nonatomic) id<IESLiveFaceGiftRouter> faceGiftRouter;
@property (retain, nonatomic) id<IESLiveScreenModule> screenModule;
@property (weak, nonatomic) id<HTSLiveViewHierarchyProvider> viewHierarchyProvider;
@property (weak, nonatomic) id<IESLiveGiftGlobalModule> giftGlobalModule;
@property (weak, nonatomic) id<HTSLiveNativeAnimationEventAction> eventActionCreator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitorAssetOnStep:(id)a0 extra:(id)a1 error:(id)a2 traceId:(id)a3;
- (void)messageReceived:(id)a0 retryCount:(long long)a1;
- (void)didReceiveNewResource:(id)a0 resourceID:(id)a1 retryCount:(long long)a2;
- (void)messageSectionDidLoad;
- (Class)currentObserveMessage;
- (BOOL)bussinessMessageFilter:(id)a0 retryCount:(long long)a1;
- (void)prepareBeforeEnqueueForMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)resourceIsReadyForMessage:(id)a0 retryCount:(long long)a1;
- (BOOL)needEnqueue:(id)a0;
- (id)giftModelFromGPBMessage:(id)a0 withCheckSupport:(BOOL)a1;
- (id)giftMessageFromGPBMessage:(id)a0;
- (BOOL)needQuickDownLoadWithGiftMessage:(id)a0;
- (void)reportUseLocalGift:(id)a0;
- (void)afterResourceIsReadyForMessage:(id)a0 ready:(BOOL)a1;
- (void)sendNodesFromMessage:(id)a0;
- (void)invokeSpecialGiftIfNeeded:(id)a0;
- (BOOL)enableReportMonitor:(id)a0;
- (void)p_startReceiverFullLinkIfNeeded:(id)a0;
- (void)serialGiftMessageReceived:(id)a0 retryCount:(long long)a1;
- (void)showStickerEffect:(id)a0 count:(long long)a1;
- (void)preloadMixGiftResources:(id)a0 completion:(id /* block */)a1;
- (id)triggerEffectWithMessage:(id)a0;
- (void).cxx_destruct;

@end
