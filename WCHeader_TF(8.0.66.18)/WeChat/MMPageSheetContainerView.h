@class NSString, MMPageSheetProviderView;
@protocol MMPageSheetProvider, MMPageSheetContainerDelegate;

@interface MMPageSheetContainerView : UIView <MMPageSheetProviderViewDelegate, MMPageSheetContainer>

@property (nonatomic) BOOL pageSheetInited;
@property (retain, nonatomic) MMPageSheetProviderView *providerView;
@property (nonatomic) struct CGSize { double width; double height; } superviewSize;
@property (weak, nonatomic) id<MMPageSheetProvider, MMPageSheetContainerDelegate> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupWithProvider:(id)a0;
- (void)showPageSheetAnimated:(BOOL)a0 parentView:(id)a1 parentViewController:(id)a2 complete:(id /* block */)a3;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updateContentHeightWithAnimated:(BOOL)a0;
- (void)pushPageSheet:(id)a0 animated:(BOOL)a1;
- (void)popPageSheetWithAnimated:(BOOL)a0;
- (void)adjustContainerYOffset:(double)a0 animated:(BOOL)a1;
- (void)popPageSheetTo:(id)a0 animated:(BOOL)a1;
- (void)onPageSheetDismiss:(id)a0 complete:(id /* block */)a1;
- (id)getContainerViewController;
- (BOOL)enablePageSheetChangeAnimation;
- (id)pageSheetContainerView;
- (void).cxx_destruct;

@end
