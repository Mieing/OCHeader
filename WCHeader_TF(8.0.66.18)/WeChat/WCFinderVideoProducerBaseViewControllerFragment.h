@class NSString;

@interface WCFinderVideoProducerBaseViewControllerFragment : MMUIViewController <WCFinderVideoProducerBaseFragmentProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onRelayoutViews;
- (double)getContentHeightWhenShowing;
- (void)setViewTop:(double)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getContainerFrame;
- (BOOL)isShowing;
- (double)getFragmentHeight;
- (double)getFragmentVisibleHeight;
- (void)showFragmentAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)dismissFragmentAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)useTransparentNavibar;
- (BOOL)hidesStatusBar;

@end
