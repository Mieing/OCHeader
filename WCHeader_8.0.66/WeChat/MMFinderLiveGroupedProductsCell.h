@class MMFinderLiveGroupedProductsBottomView, MMFinderLiveGroupedProductsImagesView, MMFinderLiveGroupedProductsViewModel;

@interface MMFinderLiveGroupedProductsCell : UITableViewCell

@property (retain, nonatomic) MMFinderLiveGroupedProductsImagesView *imageViews;
@property (retain, nonatomic) MMFinderLiveGroupedProductsBottomView *bottomView;
@property (retain, nonatomic) MMFinderLiveGroupedProductsViewModel *viewModel;

+ (double)preferHeightWithViewModel:(id)a0 inWidth:(double)a1;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
