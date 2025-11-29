@class NSArray, NSDictionary, NSURL, UIView, NSString;
@protocol ACCDRLynxContainerViewDelegate, ACCDRLynxUtilService, BDXLynxViewProtocol;

@interface ACCDRLynxView : UIView <BDXKitViewLifecycleProtocol, ACCDRLynxContainerViewProtocol>

@property (retain, nonatomic) UIView<BDXLynxViewProtocol> *lynxView;
@property (retain, nonatomic) NSURL *currentURL;
@property (copy, nonatomic) NSDictionary *props;
@property (copy, nonatomic) NSArray *xbridges;
@property (retain, nonatomic) id<ACCDRLynxUtilService> utilService;
@property (weak, nonatomic) id<ACCDRLynxContainerViewDelegate> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidStartLoading:(id)a0;
- (void)viewWillStartLoading:(id)a0;
- (void)viewDidFirstScreen:(id)a0;
- (void)viewDidUpdate:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)view:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)view:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)view:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)view:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)view:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)view:(id)a0 didRecieveError:(id)a1;
- (void)view:(id)a0 didReceivePerformance:(id)a1;
- (void)registerBridgeHandle:(id /* block */)a0 forMethod:(id)a1;
- (id)lynxParams;
- (void)loadFailedWithURL:(id)a0 error:(id)a1;
- (id)globalPropsWithURLString:(id)a0;
- (void)registerXBridges;
- (void)registerContextAndReload;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateUrl:(id)a1 rawData:(id)a2 lynxUtilService:(id)a3;
- (void)loadTemplateWithXBridges:(id)a0;
- (void)updateProps:(id)a0;
- (void)reloadProps:(id)a0;
- (void).cxx_destruct;
- (id)context;

@end
