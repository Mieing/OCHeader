@class AWEGrouponLifeFeedsRecommendAfterClickTask;

@interface AWEGrouponLifeFeedsRecommendAfterClickPlugin : AWEGrouponLifeFeedsBasePlugin

@property (retain, nonatomic) AWEGrouponLifeFeedsRecommendAfterClickTask *currentTask;
@property (nonatomic) BOOL lockTask;
@property (nonatomic) BOOL didAppear;

- (void)didTapComponentView:(id)a0 viewModel:(id)a1;
- (BOOL)enableRecommendAfterClick;
- (void)didFetchRecommendAfterClickData:(id)a0 error:(id)a1 viewModel:(id)a2;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
