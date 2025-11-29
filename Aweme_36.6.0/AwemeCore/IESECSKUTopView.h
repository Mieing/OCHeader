@class IESECUIButton, UIView, IESECGoodsDiscountPriceView, NSString, IESECSKUTopViewModel, IESECInsetsLabel, IESECGoodsPriceLabel, IESECSKUDetailContext, UILabel, IESECUIImageView;
@protocol IESECSKUTopViewDelegate;

@interface IESECSKUTopView : UIView <IESECImagePreviewTransitionContextProvider, IESECSKUTopViewProtocol>

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) IESECUIImageView *activityIconImageView;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *marketPriceLabel;
@property (retain, nonatomic) IESECGoodsDiscountPriceView *discountPriceView;
@property (retain, nonatomic) UILabel *stockLabel;
@property (retain, nonatomic) IESECInsetsLabel *installmentLabel;
@property (retain, nonatomic) UILabel *selectedSKULabel;
@property (retain, nonatomic) IESECUIButton *close;
@property (retain, nonatomic) IESECUIButton *detailButton;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *atmosphereLabel;
@property (retain, nonatomic) UILabel *depositPresaleLabel;
@property (retain, nonatomic) UILabel *topLabel;
@property (retain, nonatomic) NSString *curSkuID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECSKUTopViewModel *viewModel;
@property (weak, nonatomic) id<IESECSKUTopViewDelegate> delegate;
@property (weak, nonatomic) IESECSKUDetailContext *detailContext;
@property (nonatomic) double contentWidth;

- (void)detailClick;
- (id)targetViewForImagePreviewController:(id)a0 atIndex:(long long)a1;
- (void)tapGoodsCoverImageView;
- (void)updateStock;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)layoutSubviews;
- (double)viewHeight;
- (void)reloadView;

@end
