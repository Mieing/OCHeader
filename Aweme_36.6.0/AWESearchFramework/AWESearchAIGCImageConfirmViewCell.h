@class UIImageView, UILabel;

@interface AWESearchAIGCImageConfirmViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *queryLabel;

+ (id)queryLabelFont;
+ (struct CGSize { double x0; double x1; })sizeWithQuery:(id)a0;

- (void)updateWithQuery:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
