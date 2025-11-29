@class UIImageView, UILabel;

@interface AWEIMPrivateChatManagementToolCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *cardImageView;
@property (retain, nonatomic) UILabel *cardTitleLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;

+ (id)identifier;

- (void)__setupUI;
- (void)configWithIconURLLight:(id)a0 iconURLDark:(id)a1 title:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
