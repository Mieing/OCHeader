@class NSString, UIView;
@protocol RTVXRBusinessContextProvider, RxInjector, RTVXRStateRecorder, RTVXRWidget;

@interface RTVXRWidgetViewController : UIViewController <RTVXRWidgetDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRBusinessContextProvider> businessContextProvider;
@property (readonly, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (weak, nonatomic) UIView<RTVXRWidget> *widgetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configureComponents;
- (void)refreshWidget;
- (void)__createDependencies;
- (void)dimissFromContainer;
- (void)containerDidDismiss;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
