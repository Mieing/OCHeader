@class UIStackView, UIView, UITapGestureRecognizer, AWEMultiAvatarView, AWEUserRecommendBigCardModel, UIImageView, UIButton, AWEBinding, MASConstraint, NSString, AFDUserWorkCollectionView, UILabel;
@protocol AWEUserInfoButtonsViewProtocol, AFDUserWorkCollectionViewDataSource;

@interface AWEMateBigCardView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UILabel *mateTipLabel;
@property (retain, nonatomic) UIImageView *mateTipLabelIcon;
@property (retain, nonatomic) UIView *grayBackView;
@property (retain, nonatomic) UIButton *workItemContainerView;
@property (retain, nonatomic) AFDUserWorkCollectionView *userWorkView;
@property (retain, nonatomic) id<AFDUserWorkCollectionViewDataSource> userWorkDataSource;
@property (retain, nonatomic) UIView<AWEUserInfoButtonsViewProtocol> *infoButtonsView;
@property (retain, nonatomic) UIStackView *recommendReasonStackView;
@property (retain, nonatomic) AWEMultiAvatarView *recommendUserAvatars;
@property (retain, nonatomic) UIStackView *followStackView;
@property (retain, nonatomic) UIStackView *friendStackView;
@property (retain, nonatomic) AWEBinding *aliasBinding;
@property (retain, nonatomic) MASConstraint *avatarTopConstraint;
@property (retain, nonatomic) MASConstraint *mateTipLabelRightIconConstraint;
@property (retain, nonatomic) MASConstraint *mateTipLabelTopConstraint;
@property (retain, nonatomic) MASConstraint *mateTipLabelRightConstraint;
@property (retain, nonatomic) MASConstraint *workItemContainerViewHeightConstraint;
@property (retain, nonatomic) MASConstraint *followStackViewTopConstraint;
@property (readonly, nonatomic) UILabel *headerLabel;
@property (copy, nonatomic) id /* block */ userTapCardBlock;
@property (retain, nonatomic) AWEUserRecommendBigCardModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)p_userWorkDataSource;
- (void)p_deviceOrientationDidChange:(id)a0;
- (double)cardViewWidth;
- (double)cardViewHeightWithModel:(id)a0;
- (double)workViewHeight:(BOOL)a0;
- (void)setupFollowUI;
- (void)setupFriendUI;
- (void)setupRecommendUserAvatars;
- (id)tipTextWithUser:(id)a0;
- (void)clickWorkItemContainerView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)willDisplay;

@end
