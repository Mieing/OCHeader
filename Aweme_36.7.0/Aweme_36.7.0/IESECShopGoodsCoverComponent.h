@class UIStackView, NSString, UIImageView, UIView, NSMutableArray, IESECShopSlideShowContainer;

@interface IESECShopGoodsCoverComponent : UIView <IESECLLComponent> {
    double _radius;
    unsigned long long _cornerMask;
    IESECShopSlideShowContainer *_coverSlideshowContainer;
    NSMutableArray *_skuBigImages;
    id /* block */ _clickSkuBlk;
    UIImageView *_playerIconView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *tagViews;
@property (retain, nonatomic) UIStackView *skuImages;
@property (readonly, nonatomic) UIView *coverImageContainer;
@property (nonatomic) BOOL alwaysSquareImage;
@property (nonatomic) double coverHeight;
@property (nonatomic) struct CGSize { double width; double height; } skuSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } skuMargin;
@property (copy, nonatomic) NSString *skuSceneTag;
@property (copy, nonatomic) id /* block */ clickCoverTagBlock;

+ (id /* block */)coverWithContainerWidth:(double)a0 leftPadding:(double)a1 rightPadding:(double)a2 middlePadding:(double)a3 columnCount:(long long)a4;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 alwaysSquareImage:(BOOL)a2 showSku:(BOOL)a3 skuSize:(struct CGSize { double x0; double x1; })a4 skuMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5 skuSceneTag:(id)a6;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 cornerMask:(unsigned long long)a2 alwaysSquareImage:(BOOL)a3 showSku:(BOOL)a4 skuSize:(struct CGSize { double x0; double x1; })a5 skuMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6 skuSceneTag:(id)a7;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1;
+ (id /* block */)coverWithSize:(struct CGSize { double x0; double x1; })a0 cornerRadius:(double)a1 alwaysSquareImage:(BOOL)a2 showSku:(BOOL)a3 skuSceneTag:(id)a4;

- (void)updateUIWithModel:(id)a0;
- (id)initWithRadius:(double)a0 cornerMask:(unsigned long long)a1;
- (void)clickSkuImage:(id)a0;
- (void)clickTagView:(id)a0;
- (void)setUpTagConstraintsWithTag:(id)a0 imageView:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
