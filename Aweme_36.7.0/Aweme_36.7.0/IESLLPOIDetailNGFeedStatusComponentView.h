@class IESLLPOIDetailNGFeedStatusComponentViewModel, IESLLPOIDetailNGFeedStatusEmptyVC, IESLLPOILoadingView, LLDitoPageContext, LLDitoGeneralContainerPageContext;

@interface IESLLPOIDetailNGFeedStatusComponentView : LLDitoComponentView {
    LLDitoPageContext *_context;
}

@property (retain, nonatomic) IESLLPOILoadingView *loadingView;
@property (retain, nonatomic) IESLLPOIDetailNGFeedStatusComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIDetailNGFeedStatusEmptyVC *errorVC;
@property (weak, nonatomic) LLDitoGeneralContainerPageContext *generalContext;

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
