@class NSString, NSDictionary, IESLiveAnimatedImageView, RivalsRecommendResponse_RankSeasonInfo, UIView;

@interface IESLiveRankPanelFancyAutoMatchView : UIView <IESHYControllerDelegate>

@property (retain, nonatomic) UIView *rankSeasonAutoMatchContainerView;
@property (retain, nonatomic) UIView *lockedContainerView;
@property (retain, nonatomic) IESLiveAnimatedImageView *rivalAnimationView;
@property (retain, nonatomic) RivalsRecommendResponse_RankSeasonInfo *rankSeasonInfo;
@property (copy, nonatomic) NSDictionary *panelTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesHYControllerDidDismiss:(id)a0;
- (double)fitLength:(double)a0;
- (void)showAdvancedSpeedAutoMatchWithRankSeasonInfo:(id)a0 isNewAnchor:(BOOL)a1;
- (void)didTapAutoMatchArea;
- (void)showUnlockedRankWithRankSeasonInfo:(id)a0;
- (void)showLockedRankWithRankSeasonInfo:(id)a0;
- (void)didTapSeasonDetail;
- (void)didTapSeasonRule;
- (void)didTapToPK;
- (void)trackLockedTapWithBtnType:(id)a0;
- (void)openActionWithNavBarHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
