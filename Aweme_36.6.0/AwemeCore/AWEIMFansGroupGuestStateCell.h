@class UIButton, AWEIMFansGroupGuestItemViewModel, UIImageView, UIView, UILabel, AWEIMFansGroupTypeBottomTagView;
@protocol AWEIMFansGroupGuestStateCellDelegate;

@interface AWEIMFansGroupGuestStateCell : UICollectionViewCell

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEIMFansGroupTypeBottomTagView *avatarBottomTagView;
@property (retain, nonatomic) UILabel *nameLable;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *joinGroupButton;
@property (retain, nonatomic) UIView *tagsContainerView;
@property (retain, nonatomic) UIView *accessibilityShowingContainerView;
@property (weak, nonatomic) id<AWEIMFansGroupGuestStateCellDelegate> delegate;
@property (weak, nonatomic) AWEIMFansGroupGuestItemViewModel *viewModel;

+ (id)identifier;

- (void)__setupUI;
- (void)__buildAccessibilityLabel;
- (void)__configGroupCellLayout;
- (void)setupJoinGroupButtonWithTitle:(id)a0 enabled:(BOOL)a1;
- (void)__joinGroupButtoneClick;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
