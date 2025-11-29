@class BDPCDDynamicCardGraphicContainerCheckMoreView, UIImageView, UIView;

@interface BDPCDDynamicCardGraphicContainerView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIView *bkgView;
@property (retain, nonatomic) BDPCDDynamicCardGraphicContainerCheckMoreView *checkMoreView;
@property (retain, nonatomic) UIImageView *gradientView;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })imageMaxSize;
+ (double)heightWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (double)containerViewMaxHeight;
+ (struct CGSize { double x0; double x1; })imageSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (double)checkMoreHeight;
+ (struct CGSize { double x0; double x1; })imageMinSize;
+ (double)itemSpacing;
+ (double)gradientHeight;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
