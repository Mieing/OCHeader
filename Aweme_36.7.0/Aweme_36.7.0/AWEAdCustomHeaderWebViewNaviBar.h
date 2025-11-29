@class NSString, AWEAdCustomHeaderWebViewUserAvatarView, UIImageView, AWEAwemeModel, AWEAdCustomHeaderWebViewUserFollowButton, UIView, UILabel;

@interface AWEAdCustomHeaderWebViewNaviBar : UIView

@property (retain, nonatomic) UIImageView *backButton;
@property (retain, nonatomic) UIImageView *reportButton;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewUserFollowButton *followButton;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewUserAvatarView *avatar;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *barType;

- (void)updateViewWithModelIfNeed:(id)a0;
- (void)updateContentViewWithModel:(id)a0;
- (void)jumpToUserProfileWithGesture:(id)a0;
- (void)updateContentViewConstraintsWithModel:(id)a0;
- (void)updateNavigationButtonConstraintsWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
