@class UIImageView, AWESearchMerchandiseProductRightStruct, UILabel, UIView;

@interface AWESearchGoodsRecommendPriceView : UIView

@property (retain, nonatomic) AWESearchMerchandiseProductRightStruct *recommendPriceInfo;
@property (retain, nonatomic) UILabel *firstTagLabel;
@property (retain, nonatomic) UILabel *secondTagLabel;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *firstTagView;
@property (retain, nonatomic) UIView *secondTagView;
@property (nonatomic) BOOL needUnifiedUIConfig;

- (void)setRecommendPriceInfo:(id)a0 needUnifiedUIConfig:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
