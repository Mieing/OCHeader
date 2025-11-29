@class IESECGoodsDetailDetailTopInfoViewModel, IESECGoodsDetailDetailTopInfoDataModel, IESECGoodsDetailDetailTopInfoMetaModel;

@interface IESECGoodsDetailDetailPropertySKUFlowView : IESECHorizonFlowView

@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoViewModel *viewModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoDataModel *dataModel;
@property (retain, nonatomic) IESECGoodsDetailDetailTopInfoMetaModel *metaModel;

+ (struct CGSize { double x0; double x1; })itemSizeForData:(id)a0 containerWidth:(double)a1;
+ (double)heightOfPropertySKUViewWithDataSource:(id)a0 width:(double)a1;

- (void)setProperLocationOfSelectedSKUIfNeeded;
- (BOOL)hasCoverImageWithViewModel:(id)a0;
- (void)handleActionForCell:(id)a0 atIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })itemSizeAtIndex:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)a0;

@end
