@class UIView, NSString, AWEIMGroupDefaultAvatarView, CAShapeLayer, UIImageView, UITableView, UIPanGestureRecognizer, UIButton, UILabel, UIScrollView;
@protocol AWEIMNewGroupInviteCardViewProtocol, UITableViewDelegate, UITableViewDataSource, IESIMGroupCardConfirmBtnProtocol;

@interface AWEIMNewGroupInviteCardView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isPresentingAboveScreenBottom;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (retain, nonatomic) CAShapeLayer *maskShapeLayer;
@property (weak, nonatomic) id<AWEIMNewGroupInviteCardViewProtocol, UITableViewDelegate, UITableViewDataSource> delegate;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *topPanDimissView;
@property (retain, nonatomic) UIScrollView *scrollableContentView;
@property (retain, nonatomic) UIView *topCardView;
@property (retain, nonatomic) UIView *groupInfoContainerView;
@property (retain, nonatomic) UIImageView *groupAvatarImageView;
@property (retain, nonatomic) AWEIMGroupDefaultAvatarView *groupDefaultAvatarView;
@property (retain, nonatomic) UILabel *groupNameLabel;
@property (retain, nonatomic) UILabel *groupMemberCountLabel;
@property (retain, nonatomic) UILabel *videoInfoLabel;
@property (retain, nonatomic) UIView *tagsContentView;
@property (retain, nonatomic) UILabel *groupDescLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *groupOwnerInfoView;
@property (retain, nonatomic) UILabel *groupOwnerRoleLabel;
@property (retain, nonatomic) UIImageView *groupOwnerAvatar;
@property (retain, nonatomic) UILabel *groupOwnerNameLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *entryLimitsLabel;
@property (retain, nonatomic) UITableView *entryLimitsTableView;
@property (retain, nonatomic) UIButton<IESIMGroupCardConfirmBtnProtocol> *confirmBtn;
@property (retain, nonatomic) UIButton *moreBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__moreButtonClicked;
- (id)__popoverViewWithText:(id)a0 image:(id)a1;
- (double)__maxScrollableContentOffset;
- (void)__panned:(id)a0;
- (void)__groupOwnerInfoTapped;
- (void)__confirmBtnTapped;
- (void)switchNewGroupInviteCardConfirmBtnStyle:(unsigned long long)a0 confirmBtnTitle:(id)a1 isConfirmBtnEnabled:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)showWithCompletion:(id /* block */)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
