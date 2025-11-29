@class UIView;

@interface AWELiveFormatPlaceHolderElement : AWELiveTopElement

@property (retain, nonatomic) UIView *wrapperView;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)viewController_viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (unsigned long long)liveElementType;
- (void)updatePlaceHolder;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
