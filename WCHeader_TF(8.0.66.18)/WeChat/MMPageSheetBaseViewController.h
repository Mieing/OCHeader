@class MMPageSheetConfig, NSString, UIView;
@protocol MMPageSheetContainer;

@interface MMPageSheetBaseViewController : MMUIViewController <MMPageSheetContainerDelegate, MMPageSheetProvider>

@property (retain, nonatomic) MMPageSheetConfig *pageSheetConfig;
@property (retain, nonatomic) id<MMPageSheetContainer> pageSheetContainer;
@property (retain, nonatomic) UIView *detailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (BOOL)useCustomNavibar;
- (id)pageSheetContentView;
- (double)pageSheetContentHeight;
- (double)pageSheetContentWidth;
- (void)didPushSelfInPage:(id)a0;
- (id)pageSheetProviderController;
- (void)adjustContainerYOffset:(double)a0 animated:(BOOL)a1;
- (id)adaptedViewController;
- (void)updateDetailViewHeight:(double)a0 animated:(BOOL)a1;
- (void)showWithAnimated:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0 complete:(id /* block */)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)showInView:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)pushPageSheet:(id)a0;
- (void)pushPageSheet:(id)a0 animated:(BOOL)a1;
- (void)popPageSheet;
- (void)popPageSheetWithAnimated:(BOOL)a0;
- (void)popPageSheetTo:(id)a0 animated:(BOOL)a1;
- (id)pageSheetContainerView;
- (void)onPageSheetDismiss:(id)a0;
- (void).cxx_destruct;

@end
