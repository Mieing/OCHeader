@class UIImageView, AWEBillboardLabel, AWETeenProfileHeaderActionController, UIView;
@protocol AWEHeaderViewActionDelegate;

@interface AWETeenProfileHeaderView : UIView

@property (nonatomic) BOOL isUserFetched;
@property (weak, nonatomic) id<AWEHeaderViewActionDelegate> delegate;
@property (retain, nonatomic) AWETeenProfileHeaderActionController *actionController;
@property (nonatomic) BOOL isFirstTimeViewDidLoad;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) AWEBillboardLabel *nameLabel;
@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) UIView *tabView;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) BOOL isShowing;

- (void)showLoadingAnimation;
- (void)handleTapOnContent:(id)a0;
- (void)viewDidShow;
- (void)updateProfileCompletion:(float)a0 hidePercentWhenCompleted:(BOOL)a1;
- (id)initWithIsCurrentUser:(BOOL)a0 fromHomepage:(BOOL)a1;
- (void)configWithUser:(id)a0 isLogSent:(BOOL)a1;
- (void)showProfileInfoCompletionAnimation;
- (BOOL)isCenterStyle;
- (double)profileAvatarWidth;
- (void)adjustAlpha:(double)a0;
- (id)avatarInHeaderView;
- (id)awe_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateBottomViewLayout;
- (void)enterVideoFullScreen;
- (void)dismissLoadingAnimation:(BOOL)a0 task:(id)a1;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)viewWillShow;
- (void)viewDidHide;
- (void)viewWillHide;
- (double)originYOfIntroLabel;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (void)updateNameLabel;

@end
