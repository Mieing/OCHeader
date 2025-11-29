@class NSString;
@protocol IESLiveGiftAnimationStoreProtocol;

@interface IESLiveRebornGiftAnimationFragment : IESLiveRoomComponent <IESLiveRebornGiftAnimationRouter, IESLiveAioLinkEffectTrackService>

@property (retain, nonatomic) id<IESLiveGiftAnimationStoreProtocol> store;
@property (nonatomic) BOOL enableRefactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (id)createGiftTrayView;
- (void)enableGiftQueueConsume:(BOOL)a0;
- (void)registerSmallGiftFrameDidChangedBlock:(id /* block */)a0;
- (BOOL)isEnableBigGiftAnimation;
- (void)enableBigGiftAnimation:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentTopSmallGiftFrameWithInteractiveScene:(long long)a0;
- (void)disableNonInteractiveGiftDequeueAndStopCurrentEffect:(BOOL)a0;
- (void)clearGiftQueue;
- (void)resumeNonInteractiveGiftDequeue;
- (void)enableGiftAnimation:(BOOL)a0;
- (void)setSmallGiftAlpha:(double)a0;
- (BOOL)isSmallGiftViewMoveDownScene;
- (void)isEnableReceiveGamePlayWithNetResultCompletion:(id /* block */)a0;
- (void)enableReceiveGamePlay:(BOOL)a0 completion:(id /* block */)a1;
- (double)smallGiftViewHeight;
- (void)dispatchGiftMessage:(id)a0;
- (void)handleClearNotify:(id)a0;
- (void)registerFusionPlayerAdapter:(long long)a0 builder:(id /* block */)a1;
- (void)toggleGiftAggregationButton;
- (void)updateSendTogetherAssetSlotInfo:(id)a0;
- (void)stopPlayingSendTogetherGift;
- (unsigned long long)togetherNodeCountWithAssetID:(id)a0;
- (unsigned long long)lynxPlayingTogetherNodeCountWithAssetID:(id)a0;
- (void)dispatchFakeGiftViewWithModel:(id)a0;
- (BOOL)enableGiftSoundAndVibration;
- (void)switchGiftSoundAndVibrationControl:(BOOL)a0;
- (void)trackPlayInfoForSlardar:(id)a0 slardarInfo:(id)a1;
- (void)liveThermalStateCriticalNotification:(id)a0;
- (void)handlePowerSaveClearNotify:(id)a0;
- (void)handlePowerSaveClearHalfNotify:(id)a0;
- (void)loadGiftClearItem;
- (id)giftEffectSettingItem;
- (id)giftSoundAndVibrationSettingItem;
- (void)trackSettingItemClick:(id)a0 status:(BOOL)a1;
- (void)didClickGiftSoundAndVibrationSettingItem:(BOOL)a0;
- (void)refreshSettingItems;
- (void)changeGiftSoundAndVibrationSettingStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)statistics;

@end
