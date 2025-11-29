@class NSArray, MMFinderLiveGroupedProductsViewModel, MMWebImageView, FinderLiveGetPairingTabResponse_PairingImg;

@interface MMFinderLiveGroupedProductsImageView : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) NSArray *labels;
@property (retain, nonatomic) MMFinderLiveGroupedProductsViewModel *viewModel;
@property (retain, nonatomic) FinderLiveGetPairingTabResponse_PairingImg *data;
@property (nonatomic) BOOL allLabelsHidden;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithViewModel:(id)a0 index:(unsigned long long)a1;
- (void)layoutSubviews;
- (void)onLabelClicked:(id)a0;
- (void).cxx_destruct;

@end
