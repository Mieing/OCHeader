@class AWELifeFeedsStatusPromptVC;

@interface AWELifeFeedsStatusPromptComponentView : AWELifeFeedsBaseComponentView

@property (retain, nonatomic) AWELifeFeedsStatusPromptVC *statusPromptVC;

- (void)bindViewModel:(id)a0;
- (void)retryFetchMainData;
- (void)hiddenErrorView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showErrorView;

@end
