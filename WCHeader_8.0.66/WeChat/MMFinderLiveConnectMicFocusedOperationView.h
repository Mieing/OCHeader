@class MMFinderLiveConnectMicFocusedUserInfoView, MMLiveRewardGiftNotificationContainerView, MMFinderLiveTaskId, NSString, MMFinderLiveConnectMicUser, MMFinderLiveLotteryPacketDisplayLogic;
@protocol MMFinderLiveConnectMicOperationViewDelegate;

@interface MMFinderLiveConnectMicFocusedOperationView : UIView <MMFinderLiveConnectMicBaseUserInfoViewDelegate, WCFinderHeadImageViewDelegate, MMFinderLiveConnectMicOperationViewBase>

@property (retain, nonatomic) MMFinderLiveTaskId *finderLiveTaskId;
@property (retain, nonatomic) MMFinderLiveConnectMicUser *connectMicUserInfo;
@property (retain, nonatomic) MMFinderLiveConnectMicFocusedUserInfoView *userInfoView;
@property (retain, nonatomic) MMLiveRewardGiftNotificationContainerView *giftNotificationContainerView;
@property (weak, nonatomic) id<MMFinderLiveConnectMicOperationViewDelegate> actionDelegate;
@property (readonly, nonatomic) unsigned long long viewType;
@property (retain, nonatomic) MMFinderLiveLotteryPacketDisplayLogic *lotteryPacketDisplayLogic;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayNormalizedFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)prepareForReuse;
- (id)refViewForDisplayPaidMicKeepAliveTips;
- (void)showWithConnectMicUserInfo:(id)a0 isGlobalSmallMode:(BOOL)a1 isInFullScreenPKStyle:(BOOL)a2 configureLiveDirtyHandle:(BOOL)a3 hideSmallWidgets:(BOOL)a4;
- (void)clearAndHide;
- (void)updateOperationViewsAlpha:(double)a0;
- (void)updateUserStatusUIWithChangeType:(unsigned long long)a0;
- (void)updateExtraTopInset:(double)a0;
- (void)updateExtraLeftTopInset:(double)a0;
- (void)updateExtraBottomInset:(double)a0;
- (void)updateUserGlobalBadgeLevel:(unsigned int)a0;
- (void)updateLiveHeatValue;
- (id)getUserInfoView;
- (void)insertToPIPRenderLayerIfNeeded;
- (id)temporarilyHideNonEssentialViews;
- (void)restoreNonEssentialViewsWithHiddenStatusContainer:(id)a0;
- (void)updateSmallWidgetsHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapNickNameWithUserInfo:(id)a0;
- (void)onMMFinderLiveConnectMicBaseUserInfoViewTapMicMutedButtonWithUserInfo:(id)a0;
- (void)finderHeadImageViewDidClick:(id)a0;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void)configConnectMicOperationView:(BOOL)a0;
- (BOOL)isFeedStreamTask;
- (BOOL)insertAudioMicOperationViewToPIPRenderLayer;
- (void).cxx_destruct;

@end
