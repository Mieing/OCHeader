@class IESLiveDynamicRankListEntranceView, NSDictionary, NSString;

@interface IESLiveDynamicRankListEntranceFragment : IESLiveRoomComponent <HTSLiveRankListRouter, IESLiveStickerAnchorActions, HTSLiveMessageSubscriber, IESLiveDynamicRankListEntranceViewDelegate, IESLiveDynamicRankListEntranceViewDataProvider, HTSLiveAudienceActions>

@property (retain, nonatomic) IESLiveDynamicRankListEntranceView *entranceView;
@property (copy, nonatomic) NSDictionary *statusMap;
@property (nonatomic) BOOL externalHideVertical;
@property (nonatomic) BOOL needReuse;
@property (copy, nonatomic) id /* block */ hideVerticalCompletion;
@property (nonatomic) BOOL isInDegrade;
@property (nonatomic) long long degradeLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationTransitioning:(long long)a0;
- (void)handleOrientationChanged:(long long)a0;
- (void)liveWillEndWithReason:(unsigned long long)a0;
- (id)dynamicSchema;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (void)hideVerticalEntranceAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showVerticalEntranceAnimated:(BOOL)a0;
- (void)updateEntranceStatus:(id)a0;
- (unsigned long long)getCurrentWarningLevel;
- (void)p_addPerformanceDegradationObserver;
- (long long)getDrawLoadDelay;
- (void)p_handleAwardMessage:(id)a0;
- (void)p_prepareResourceIfNeededWithAwardMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableVerticalEntrance;
- (void)p_handleExternalCompletion;
- (void)p_addEntranceView:(BOOL)a0;
- (void)updateEntranceViewWithOrientationIfNeeded;
- (void)_postPerfWarningNotification:(long long)a0;
- (id)p_generateAspectFitImageWithContent:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;
- (id)p_generateImageWithContent:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 container:(id)a2;
- (long long)assetBizTypeWithRankType:(unsigned long long)a0;
- (id)p_buildRankAwardMixInfoWithMessage:(id)a0;
- (void)didChangeDynamicEntranceWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)didFaildToLoadDynamicEntrance;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
