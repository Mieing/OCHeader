@class UILabel;

@interface AWESearchAIGCCustomerReviewsViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tabLabel;

+ (struct CGSize { double x0; double x1; })sizeWithTab:(id)a0;
+ (id)tabLabelFont;

- (void)updateTextWithTab:(id)a0;
- (void)updateColorforSelectedState:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
