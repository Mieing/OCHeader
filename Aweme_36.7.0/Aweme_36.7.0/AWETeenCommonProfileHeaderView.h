@class UIView, NSString, UIImageView, AWEUIButton, AWETeenUserProfileCoverView, AWEAnimatedButton, AWETeenProfileHeaderActionController, UILabel;

@interface AWETeenCommonProfileHeaderView : AWETeenDYProfileHeaderView <UIGestureRecognizerDelegate, AWETeenSubscribeMessage> {
    BOOL _isFirstTimeViewDidLoad;
    AWETeenProfileHeaderActionController *_actionController;
}

@property (retain, nonatomic) AWETeenUserProfileCoverView *coverView;
@property (retain, nonatomic) AWEAnimatedButton *genderAndAgeButton;
@property (retain, nonatomic) AWEAnimatedButton *unknownButton;
@property (retain, nonatomic) UIImageView *unknownImageView;
@property (retain, nonatomic) UILabel *unknownLabel;
@property (retain, nonatomic) AWEUIButton *editButton;
@property (retain, nonatomic) UIView *yellowDot;
@property (nonatomic) double lastOffset;
@property (readonly, nonatomic, getter=isCoverImageViewLoaded) BOOL coverImageViewLoaded;
@property (nonatomic) BOOL avatarLoadFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;

- (void)awe_themeDidChange:(long long)a0;
- (void)handleTapOnContent:(id)a0;
- (void)p_updateUI;
- (id)aAWEBrandColorAdapter;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)p_setGenderAndAgeContent;
- (void)p_makeConstraintsForInfoButton:(id)a0 preButton:(id)a1 preView:(id)a2;
- (id)p_setupInfoButtons:(id)a0;
- (void)p_remakeConstraintsForSocialStatisticViewTopView:(id)a0;
- (void)p_constructInfoButton:(id)a0;
- (void)p_updateBannerImageView:(double)a0 scrollUp:(BOOL)a1;
- (BOOL)isTargetView:(id)a0 tapLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)p_avatarTapped;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (void)editProfile:(id)a0;
- (void)p_setupInfoButton:(id)a0;
- (id)initWithIsCurrentUser:(BOOL)a0 fromHomepage:(BOOL)a1;
- (void)configWithUser:(id)a0 isLogSent:(BOOL)a1;
- (void)showProfileInfoCompletionAnimation;
- (BOOL)isFirstTimeViewDidLoad;
- (void)setIsFirstTimeViewDidLoad:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)actionController;
- (void)handlePanGesture:(id)a0;
- (void)setActionController:(id)a0;

@end
