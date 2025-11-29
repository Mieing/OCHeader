@class AWEDitoPOIFavoriteGrouponCellViewModel, UIImageView, AWEPOITagsView, UILabel;

@interface AWEDitoPOIFavoriteGrouponCellComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteGrouponCellViewModel *viewModel;
@property (nonatomic) BOOL isLargeMode;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *grouponNameLabel;
@property (retain, nonatomic) AWEPOITagsView *labelsView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *timesLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UILabel *soldCountLabel;

- (void)updateViewModel:(id)a0;
- (double)adaptFontSize:(double)a0;
- (void)handleTapContainerView:(id)a0;
- (void)handleTapPoiName:(id)a0;
- (id)getPoiNameLabelTextWith:(id)a0 text2:(id)a1 text3:(id)a2;
- (id)priceString:(long long)a0;
- (void)setupWithItem:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)moduleHeight;

@end
