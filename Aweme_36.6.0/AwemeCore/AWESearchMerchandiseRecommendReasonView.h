@class AWESearchMerchandiseRecommendReasonItemView;

@interface AWESearchMerchandiseRecommendReasonView : UIView

@property (retain, nonatomic) AWESearchMerchandiseRecommendReasonItemView *leftItemView;
@property (retain, nonatomic) AWESearchMerchandiseRecommendReasonItemView *rightItemView;
@property (nonatomic) BOOL isFromECommerce;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithModel:(id)a0;
- (void)setUpViews;

@end
