@class UILabel, ACCButton, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEAIVideoClipRetryPanelView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) ACCButton *retryButton;

- (void)p_retryAction;
- (void)showRetryAfterDelay:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)showLoading;

@end
