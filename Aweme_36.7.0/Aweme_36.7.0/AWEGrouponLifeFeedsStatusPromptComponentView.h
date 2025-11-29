@class AWEGrouponLifeFeedsStatusPromptVC;

@interface AWEGrouponLifeFeedsStatusPromptComponentView : AWEGrouponLifeFeedsBaseComponentView

@property (retain, nonatomic) AWEGrouponLifeFeedsStatusPromptVC *statusPromptVC;

- (void)bindViewModel:(id)a0;
- (void)retryFetchMainData;
- (void)hiddenErrorView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showErrorView;

@end
