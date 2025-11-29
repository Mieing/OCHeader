@class NSString, UIScrollView, UIColor;

@interface WAWebViewPlugin_CustomNavigationBar : WAWebViewPluginBase <UIScrollViewDelegate> {
    BOOL _webAppear;
    UIScrollView *_scrollListener;
    UIColor *_reservedBgColor;
    long long _reservedStatusBar;
    long long _reservedNavigationMode;
    NSString *_reservedNavigationTitle;
}

@property (nonatomic) long long shareMenuType;
@property (nonatomic) BOOL showShareMenu;
@property (nonatomic) BOOL showSellsDriving;
@property (nonatomic) BOOL listenTapStatusBar;
@property (nonatomic) BOOL shouldUseDynamicPageShare;
@property (nonatomic) long long gameMenuStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1;
- (void)changeStatusBarWhite:(BOOL)a0;
- (void)__changeStatusBarWhite:(BOOL)a0;
- (void)addWeAppStatusBarListener;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)setNavBarBackgroundColor:(id)a0;
- (void)setNavBarElementAndStatusBarStyle:(long long)a0;
- (void)setNavBarTitle:(id)a0;
- (void).cxx_destruct;

@end
