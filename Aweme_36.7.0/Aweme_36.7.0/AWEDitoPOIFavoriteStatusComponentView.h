@class AWEDitoPOIFavoritePageContext, AWEDitoPOIFavoriteStatusErrorVC, AWEPOILoadingView, AWEDitoPOIFavoriteStatusComponentViewModel;

@interface AWEDitoPOIFavoriteStatusComponentView : DitoComponentView

@property (weak, nonatomic) AWEDitoPOIFavoriteStatusComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOILoadingView *loadingView;
@property (retain, nonatomic) AWEDitoPOIFavoriteStatusErrorVC *errorVC;
@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)hiddenErrorView;
- (void)updateWithLoadMoreState:(unsigned long long)a0;
- (void)tryShowErrorView;
- (void)retryLoadFeedsData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setupUI;
- (void)showErrorView;

@end
