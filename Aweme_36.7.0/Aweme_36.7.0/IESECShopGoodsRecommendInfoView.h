@class YYLabel, UIFont, UIColor;

@interface IESECShopGoodsRecommendInfoView : UIView {
    UIFont *_textDefaultFont;
    UIColor *_textDefaultColor;
}

@property (retain, nonatomic) YYLabel *textView;
@property (nonatomic) BOOL showNewFontColor;
@property (nonatomic) double reasonLabelFontSize;

- (void)setRecommendRitTag:(id)a0;
- (id)p_recommendIconImageView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
