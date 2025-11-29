@class NSString, DUXBadge, DUXBaseImageView, UIView;
@protocol AWELeftSideBarEntranceBussinessViewProtocol, AWEHPTopBarCTABadgeProtocol, AWELeftSideBarEntranceViewDelegate;

@interface AWELeftSideBarEntranceView : UIView <AWEHPSideBarEntranceTapGestureRecognizerDelegate, AWELeftSideBarEntranceViewProtocol>

@property (retain, nonatomic) DUXBaseImageView *leftSideBarDefaultEntranceView;
@property (retain, nonatomic) UIView<AWELeftSideBarEntranceBussinessViewProtocol> *businessEntranceView;
@property (retain, nonatomic) DUXBadge *redDot;
@property (retain, nonatomic) DUXBadge *numericalRedDot;
@property (nonatomic) long long operateIndex;
@property (retain, nonatomic) DUXBaseImageView *customLightModeImageView;
@property (retain, nonatomic) DUXBaseImageView *customDarkModeImageView;
@property (weak, nonatomic) id<AWELeftSideBarEntranceViewDelegate> delegate;
@property (weak, nonatomic) id<AWEHPTopBarCTABadgeProtocol> badgeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL interactiveAnimationShowing;

+ (Class)aAWELeftSideBarCommonAdapterClass;

- (void)layoutSubviews;
- (void)awe_setHitTestingInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)awe_themeDidChange:(long long)a0;
- (double)topCTAFloat:(double)a0;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (id)aAWELeftSideBarCommonAdapter;
- (void)sideBarEntranceTapGestureRecognizerTouchesBegan:(id)a0;
- (void)sideBarEntranceTapGestureRecognizerTapFailed:(id)a0;
- (long long)leftSideBarBusinessEntranceRedDotStyle;
- (long long)currentLeftSideBarBussinessEntranceRedDotCount;
- (void)addLeftSideBarBussinessEntranceView:(id)a0 completion:(id /* block */)a1;
- (void)removeLeftSideBarBussinessEntranceViewWithCompletion:(id /* block */)a0;
- (void)showInteractiveEndAnimation:(long long)a0;
- (void)showLeftSideBarBussinessEntranceRedDotWithCompletion:(id /* block */)a0;
- (void)hideLeftSideBarBussinessEntranceRedDotWithCompletion:(id /* block */)a0;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:(long long)a0 withCompletion:(id /* block */)a1;
- (void)hideLeftSideBarBussinessEntranceCountRedDotWithCompletion:(id /* block */)a0;
- (void)addLeftSideBarEntranceView;
- (void)p_loadCustomImageView;
- (void)p_updateDefaultEntranceViewImage;
- (void)p_setDisplayImageViewHidden:(BOOL)a0;
- (void)p_updateDotBadgeConstraintIfNeeded:(id)a0;
- (void)p_updateNumberBadgeConstraintIfNeeded:(id)a0;
- (double)getDurationSetting;
- (id)p_normalBadgeViewConfig;
- (void)p_setupDotBadgeConstraint:(id)a0;
- (id)p_numberBadgeViewConfig;
- (void)p_setupNumberBadgeConstraint:(id)a0;
- (id)p_customBadgeAnchorView;
- (void)leftSideBarEntranceViewPreferTheme:(long long)a0;
- (void)displayCustomLightModeImage:(id)a0 darkModeImage:(id)a1;
- (void)updateCustomImageDisplayEffectWithProgress:(double)a0;
- (void)leftSideBarEntranceViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
