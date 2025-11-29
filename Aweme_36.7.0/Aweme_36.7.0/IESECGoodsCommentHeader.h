@class IESECUIImageView, IESECHighlightButton, UILabel, UIView, IESECGoodsCommentHeaderConfig;
@protocol IESECGoodsCommentHeaderActionDelegate;

@interface IESECGoodsCommentHeader : UIView

@property (retain, nonatomic) IESECGoodsCommentHeaderConfig *config;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) IESECHighlightButton *backCloseButton;
@property (retain, nonatomic) IESECHighlightButton *shareButton;
@property (retain, nonatomic) IESECHighlightButton *moreButton;
@property (retain, nonatomic) IESECHighlightButton *addToCartButton;
@property (retain, nonatomic) IESECHighlightButton *collectionButton;
@property (retain, nonatomic) UILabel *addToCartHintLabel;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) IESECUIImageView *subArrowView;
@property (retain, nonatomic) UIView *leftTitleLabelSkuView;
@property (retain, nonatomic) UILabel *leftTitleLabel;
@property (retain, nonatomic) UIView *newSkuSelectorView;
@property (retain, nonatomic) IESECUIImageView *skuImageView;
@property (retain, nonatomic) UILabel *skuTitleLabelView;
@property (weak, nonatomic) id<IESECGoodsCommentHeaderActionDelegate> delegate;

+ (double)height;

- (void)tapClose;
- (void)setCommentTitle:(id)a0;
- (void)setCommentTitle:(id)a0 withSubArrowShow:(BOOL)a1;
- (void)setCommentSKUTitle:(id)a0;
- (void)tapShare;
- (void)tapShoppingCart;
- (void)tapMore;
- (id)imageHighlightButtonWithImage:(id)a0 tintColor:(id)a1 hitTest:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 action:(SEL)a3 makeConstraints:(id /* block */)a4;
- (void)updateShoppingCartLabelCount:(long long)a0;
- (void)tapCollection;
- (void)tapMainTitleLabel;
- (void)setLabelTapWithAction:(id)a0 action:(SEL)a1;
- (void)tapSkuSelectorView;
- (void)initSKUSelector;
- (void)setCommentViewBgColor:(id)a0;
- (void)updateCollectButtonStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
