@class DitoPageContext, DitoGeneralContainerPageContext, AWEPOIDetailNGFeedStatusEmptyVC, AWEPOILoadingView, AWEPOIDetailNGFeedStatusComponentViewModel;

@interface AWEPOIDetailNGFeedStatusComponentView : DitoComponentView {
    DitoPageContext *_context;
}

@property (retain, nonatomic) AWEPOILoadingView *loadingView;
@property (retain, nonatomic) AWEPOIDetailNGFeedStatusComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIDetailNGFeedStatusEmptyVC *errorVC;
@property (weak, nonatomic) DitoGeneralContainerPageContext *generalContext;

- (void)updateViewModel:(id)a0;
- (void)setupUIIfNeeded;
- (void)bindActionAndState;
- (void)hiddenErrorView;
- (void)updateWithLoadMoreState:(unsigned long long)a0;
- (void)tryShowErrorView;
- (void)retryLoadFeedsData;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (id)context;
- (void)showErrorView;

@end
