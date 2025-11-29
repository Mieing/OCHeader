@interface WCSplitDetailNavigationController : MMUINavigationController

@property (nonatomic) BOOL isPresented;
@property (nonatomic) BOOL isViewDisappear;
@property (nonatomic) struct CGSize { double width; double height; } lastViewSize;
@property (nonatomic) BOOL isSizeChanged;

- (id)initWithRootViewController:(id)a0 isBeingPresent:(BOOL)a1;
- (BOOL)isBeingPresented;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;

@end
