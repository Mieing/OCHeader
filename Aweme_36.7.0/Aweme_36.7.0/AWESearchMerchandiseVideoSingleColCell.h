@interface AWESearchMerchandiseVideoSingleColCell : AWESearchMerchandiseVideoBaseCell

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (double)goodsImageWidth:(id)a0 containerWidth:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)trackCardShow;
- (void)setSearchInfoDict:(id)a0;
- (double)goodsImgWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageVideoAreaFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
