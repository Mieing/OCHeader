@class NSString, NSDictionary, NSURL, UIView, UITapGestureRecognizer;
@protocol AWEBottomContainerViewLifeCycleDelegate, AWEBottomContainerTrackLynxTapDelegate, BDXViewContainerProtocol;

@interface AWENewPlayletBottomContainerBaseView : UIView <BDXContainerLifecycleProtocol, UIGestureRecognizerDelegate, AWEBottomContainerConfigProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *containerView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) NSURL *currentURL;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (weak, nonatomic) id<AWEBottomContainerViewLifeCycleDelegate> lifeCycleDelegate;
@property (weak, nonatomic) id<AWEBottomContainerTrackLynxTapDelegate> trackLynxTapDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSURL *templateURL;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)containerDidUpdate:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)container:(id)a0 didReceivePerformance:(id)a1;
- (void)registerBridgeHandle:(id /* block */)a0 forMethod:(id)a1;
- (void)sendGlobalEvent:(id)a0 withParams:(id)a1;
- (void)configureUI;
- (void)trackClick;
- (void)loadURL:(id)a0 withData:(id)a1 extraInfo:(id)a2;
- (void)loadFailedWithURL:(id)a0 error:(id)a1;
- (id)generateContext;
- (id)globalPropsWithURLString:(id)a0;
- (id)customerComponentKeyClassPairToRegister;
- (id)getBDXLynxViewWithComponentDic:(id)a0;
- (id)bdxParams;
- (id)globalPropsForInitialize;
- (id)extractGlobalPropsWithURLString:(id)a0;
- (id)bdxlynxElementWithRegisterName:(id)a0 elementClass:(Class)a1;
- (void)loadTemplateURLWithRawData:(id)a0 extraInfo:(id)a1;
- (void)updateContainerWithRawData:(id)a0 extraInfo:(id)a1;
- (void)reloadContainerWithRawData:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)containerID;
- (id)init;
- (double)viewHeight;

@end
