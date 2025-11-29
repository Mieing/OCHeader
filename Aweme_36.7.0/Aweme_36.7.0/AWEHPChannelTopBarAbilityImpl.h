@class NSString, AWEHPTabAlphaTask;
@protocol AWEHPChannelTopBarAbilityImpl;

@interface AWEHPChannelTopBarAbilityImpl : AWEHPChannelBaseAbilityImpl <AWEHPChannelTopBarAbility>

@property (retain, nonatomic) AWEHPTabAlphaTask *alphaTask;
@property (weak, nonatomic) id<AWEHPChannelTopBarAbilityImpl> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBubbleWithCompletion:(id /* block */)a0;
- (void)hideBadgeWithCompletion:(id /* block */)a0;
- (void)showBubbleWithModel:(id)a0 showCallback:(id /* block */)a1 clickCallback:(id /* block */)a2 dismissCallback:(id /* block */)a3;
- (void)showBadgeWithModel:(id)a0 showCallBack:(id /* block */)a1 hideCallBack:(id /* block */)a2 downgradeCallBack:(id /* block */)a3;
- (void)updateEntranceWithModel:(id)a0 completion:(id /* block */)a1;
- (double)tabSegmentShowPercentWithChannelId:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topContainerFrame;
- (void)updateTopBarBadgeSceneStyle:(unsigned long long)a0;
- (void)changeAlphaWith:(double)a0;
- (struct CGPoint { double x0; double x1; })bottomCenterOfTabSegmentWithChannelId:(id)a0;
- (void)removeAllResourcesIfNeedBeforeChannelUnload;
- (void)showBadgeWithModel:(id)a0 preCheckCallBack:(id /* block */)a1 showCallBack:(id /* block */)a2 hideCallBack:(id /* block */)a3 downgradeCallBack:(id /* block */)a4;
- (void)addTrackParamsWithModel:(id)a0 currentPercent:(double)a1;
- (BOOL)isTabVisibleWithCurrentPercent:(double)a0;
- (void)trackRedDotShowInterceptWithComponentID:(id)a0 tabShowPercent:(double)a1;
- (void)showBubbleWithModel:(id)a0 preCheckCallBack:(id /* block */)a1 showCallback:(id /* block */)a2 clickCallback:(id /* block */)a3 dismissCallback:(id /* block */)a4;
- (BOOL)checkTargetValid;
- (BOOL)checkChannelValid;
- (void)tryShowBadgeWithModel:(id)a0 preCheckCallBack:(id /* block */)a1;
- (void)tryShowBubbleWithModel:(id)a0 preCheckCallBack:(id /* block */)a1;
- (BOOL)isTabVisibleForShowBadge;
- (void)scrollToTabSegmentWithChannelId:(id)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabSegmentViewRect;
- (struct CGPoint { double x0; double x1; })topCenterPointOfWindowWithChannelId:(id)a0;
- (void).cxx_destruct;

@end
