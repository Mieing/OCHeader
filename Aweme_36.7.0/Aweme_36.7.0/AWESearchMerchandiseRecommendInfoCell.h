@class UILabel;

@interface AWESearchMerchandiseRecommendInfoCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *content;
@property (nonatomic) BOOL isFromECommerce;

+ (double)widthWithModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkMode;
- (void)updateWithModel:(id)a0;
- (void)setUpViews;

@end
