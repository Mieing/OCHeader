@class NSArray;

@interface MMFinderLiveProductLittleTailView : MMUIButton

@property (retain, nonatomic) NSArray *imageViews;

+ (double)imageWidth;
+ (double)preferHeightForGoods:(id)a0 inWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithGoods:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
