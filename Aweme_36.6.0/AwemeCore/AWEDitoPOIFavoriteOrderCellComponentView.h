@class NSString, UIImageView, AWEPOITagsView, UILabel, AWEDitoPOIFavoriteOrderCellViewModel;

@interface AWEDitoPOIFavoriteOrderCellComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteOrderCellViewModel *viewModel;
@property (retain, nonatomic) NSString *POINameString;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *orderNameLabel;
@property (retain, nonatomic) UILabel *singlePriceLabel;
@property (retain, nonatomic) UILabel *validDateLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) AWEPOITagsView *labelsView;
@property (retain, nonatomic) UILabel *pricePrefixLabel;
@property (retain, nonatomic) UILabel *pricePrefixSymbolLabel;
@property (retain, nonatomic) UILabel *totalPriceLabel;

- (void)updateViewModel:(id)a0;
- (void)handleTapContainerView:(id)a0;
- (void)handleTapPoiName:(id)a0;
- (id)getPoiNameLabelTextWith:(id)a0 text2:(id)a1 text3:(id)a2;
- (id)priceString:(long long)a0;
- (id)priceStringWithPrefix:(long long)a0;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (double)moduleHeight;

@end
