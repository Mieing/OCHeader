@class NSString, UIView;

@interface AWERTVFeedCastVideoPanelContainerViewController : UIViewController <RTVPageSheetViewControllerProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) struct CGSize { double width; double height; } targetPreferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (BOOL)awe_shouldBypassPresentationHook;
- (BOOL)enableCloseButtonForPageSheetPresentation;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (id)initWithContentView:(id)a0;
- (void)updatePreferredContentSize:(struct CGSize { double x0; double x1; })a0;

@end
