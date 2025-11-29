@class AWEAwemeModel, UIView, AWEBillboardLabel, AWEAdCustomHeaderWebViewUserFollowButton, NSString, AWEAdCustomHeaderWebViewUserAvatarView, AWEAdCustomHeaderWebVieweEnterpriseVerifyInfoView, UILabel;

@interface AWEAdCustomHeaderWebViewTopCard : UIView

@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) UIView *userInfoView;
@property (retain, nonatomic) UIView *bottomWebTitleView;
@property (retain, nonatomic) UIView *bottomDescriptionView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *webTitleLabel;
@property (retain, nonatomic) UILabel *fansDescription;
@property (retain, nonatomic) UILabel *uniqueInfoLabel;
@property (retain, nonatomic) UILabel *praiseLabel;
@property (retain, nonatomic) UILabel *fansLabel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEBillboardLabel *starNameLabel;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewUserAvatarView *avatar;
@property (retain, nonatomic) AWEAdCustomHeaderWebViewUserFollowButton *followButton;
@property (retain, nonatomic) AWEAdCustomHeaderWebVieweEnterpriseVerifyInfoView *enterpriseVerifyInfoView;
@property (copy, nonatomic) NSString *barType;

- (void)updateViewWithModelIfNeed:(id)a0;
- (void)setupConstraintsWithModel:(id)a0;
- (void)setupCardWithModel:(id)a0;
- (void)updateBottomWebTitleViewIfNeed;
- (void)updateBackgroundColorWithModel:(id)a0;
- (BOOL)isEnterpriseVerified:(id)a0;
- (void)jumpToUserProfileWithGesture:(id)a0;
- (void)updateViewConstraintWithUserModelIfNeed:(id)a0;
- (void)updateWebTitleConstraint;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
