@class AWEIMRecommendFansGroupItemViewModel, NSArray, UIImageView, NSString, UILabel, UIView, UIButton;
@protocol AWEIMRecommendFansGroupCellDelegate;

@interface AWEIMRecommendFansGroupCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *groupNameLable;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *memberCountLabel;
@property (retain, nonatomic) UILabel *groupOwnerNameLabel;
@property (retain, nonatomic) UIButton *joinGroupButton;
@property (retain, nonatomic) UIView *tagsContainerView;
@property (retain, nonatomic) NSArray *tagLabels;
@property (retain, nonatomic) NSArray *tagViews;
@property (retain, nonatomic) UIView *accessibilityShowingContainerView;
@property (copy, nonatomic) NSString *groupTagString;
@property (nonatomic) double maxTagLength;
@property (weak, nonatomic) id<AWEIMRecommendFansGroupCellDelegate> delegate;
@property (weak, nonatomic) AWEIMRecommendFansGroupItemViewModel *viewModel;

+ (id)identifier;

- (void)__setupUI;
- (void)__buildAccessibilityLabel;
- (void)setupJoinGroupButtonWithTitle:(id)a0 enabled:(BOOL)a1;
- (void)__joinGroupButtoneClick;
- (void)__configGroupTags:(id)a0;
- (void)__setupGroupTags;
- (void)__jumpToGroupOwenerPage;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
