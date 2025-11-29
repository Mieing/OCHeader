@class UIScrollView, UIImageView, WSDotLoadingView;

@interface WSWebViewPlugin_loadingPage : WSWebViewPluginBase

@property (retain, nonatomic) UIScrollView *loadingContainerView;
@property (retain, nonatomic) UIImageView *headView;
@property (retain, nonatomic) WSDotLoadingView *WSDotLoadingView;
@property (readonly, nonatomic) BOOL isLoading;

- (void)handleEvent:(id)a0 userInfo:(id)a1;
- (void)initAnimatingView;
- (void)startLoadingAnimation;
- (void)handleLoadingTimeout;
- (void)stopLoadingAnimation;
- (void)removeAllView;
- (void).cxx_destruct;

@end
