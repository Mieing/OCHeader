@class AWESearchMerchandiseRecommendReasonItemView;

@interface AWESearchMerchandiseRecommendReasonCell : UICollectionViewCell

@property (retain, nonatomic) AWESearchMerchandiseRecommendReasonItemView *leftItemView;
@property (retain, nonatomic) AWESearchMerchandiseRecommendReasonItemView *rightItemView;
@property (nonatomic) BOOL isOnlyOne;
@property (nonatomic) BOOL isFromECommerce;

+ (double)widthWithLeftOrRightModel:(id)a0;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isDarkMode;
- (void)updateWithModel:(id)a0;
- (void)setUpViews;

@end
