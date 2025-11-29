@class UIImageView, UILabel, UIView, AWEIMGroupOwnerMessagesListCellViewModel;
@protocol AWEIMGroupOwnerMessagesListCollectionViewCellDelegate;

@interface AWEIMGroupOwnerMessagesListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (weak, nonatomic) id<AWEIMGroupOwnerMessagesListCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) AWEIMGroupOwnerMessagesListCellViewModel *viewModel;

+ (double)preferredContentLabelWidth;
+ (id)identifier;

- (void)didClickContent;
- (void)didClickAvatar;
- (void)renderCustomizeContentWithVM:(id)a0;
- (void)renderWithVM:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
