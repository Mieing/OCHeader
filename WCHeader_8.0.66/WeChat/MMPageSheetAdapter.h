@class NSString, MMPageSheetConfig, UIView, UIViewController;
@protocol MMPageSheetContainer, MMPageSheetAdapterDelegate;

@interface MMPageSheetAdapter : NSObject <MMPageSheetContainerDelegate, MMPageSheetProvider>

@property (retain, nonatomic) UIView *hostView;
@property (retain, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) MMPageSheetConfig *pageSheetConfig;
@property (retain, nonatomic) id<MMPageSheetContainer> pageSheetContainer;
@property (nonatomic) BOOL shouldAutoAdaptNavigationItem;
@property (weak, nonatomic) id<MMPageSheetAdapterDelegate> delegate;
@property (nonatomic) double contentHeight;
@property (copy, nonatomic) id /* block */ didCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithViewController:(id)a0 height:(double)a1;
+ (id)adatperWithView:(id)a0 height:(double)a1;

- (id)hostWebViewController;
- (void)onPageSheetConfigChangedOnWebExt;
- (void)__attachWebPageSheet:(id)a0;
- (id)__getAttachedWebPageSheet;
- (void)bindListenProgressObjectModel:(id)a0;
- (void)_observeViewFrameChanged:(id)a0 changeBlock:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (void)showWithAnimated:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)updateDetailViewHeight:(double)a0 animated:(BOOL)a1;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)pushPageSheet:(id)a0;
- (void)pushPageSheet:(id)a0 animated:(BOOL)a1;
- (void)popPageSheet;
- (void)popPageSheetWithAnimated:(BOOL)a0;
- (void)popPageSheetTo:(id)a0 animated:(BOOL)a1;
- (id)pageSheetContainerView;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)didPushSelfInPage:(id)a0;
- (id)pageSheetProviderController;
- (id)adaptedViewController;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)pageSheetWillCloseWithType:(long long)a0;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void)adjustContainerYOffset:(double)a0 animated:(BOOL)a1;
- (void)pageSheetDidRotation;
- (void)pageSheetPresentAnimateWillBegin;
- (void)pageSheetDidChangeVisibleHeight:(double)a0;
- (void)pageSheetPresentAnimateDidEnd;
- (void)onPageSheetDismiss:(id)a0;
- (void)onPageSheetShowInContainer:(id)a0;
- (double)currentDetailViewHeight;
- (void)setDetailViewHeight:(double)a0;
- (void)autoAdaptNavigationItem;
- (void)callbackPresentWillBegin;
- (void).cxx_destruct;

@end
