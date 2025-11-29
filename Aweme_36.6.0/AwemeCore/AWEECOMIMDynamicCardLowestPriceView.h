@class BDPCDDynamicCardPriceView, UIImageView, UILabel, UIView;

@interface AWEECOMIMDynamicCardLowestPriceView : AWEECOMIMDynamicCardBaseElementView

@property (retain, nonatomic) UIImageView *bgLeftImageView;
@property (retain, nonatomic) UIImageView *bgMiddleLeftImageView;
@property (retain, nonatomic) UIImageView *bgMiddleImageView;
@property (retain, nonatomic) UIImageView *bgMiddleRightImageView;
@property (retain, nonatomic) UIImageView *bgRightImageView;
@property (retain, nonatomic) UILabel *discountContentLabel;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *discountPriceView;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *originPriceView;
@property (retain, nonatomic) UIView *currentPriceViewContainer;
@property (retain, nonatomic) BDPCDDynamicCardPriceView *currentPriceView;
@property (retain, nonatomic) UILabel *restoreLabel;

+ (struct CGSize { double x0; double x1; })sizeWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)checkSupportSubElementViewWithElementModel:(id)a0;
+ (double)widthWithElementModel:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isVisible:(id)a0;

- (void)updateWithElememtModel:(id)a0;
- (double)widthWithElementModel:(id)a0;
- (double)heightWithElementModel:(id)a0;
- (void)setImage:(id)a0 imageNamed:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
