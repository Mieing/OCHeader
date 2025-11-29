@class NSString, NSURL, AWEVideoHallPannelNaviBarView, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEVideoHallPanelContainerViewController : UIViewController <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEVideoHallPannelNaviBarView *navigationBar;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *containerView;
@property (nonatomic) double topSafeInset;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSString *navigationTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillStartLoading:(id)a0;
- (void)container:(id)a0 didStartFetchResourceWithURL:(id)a1;
- (void)container:(id)a0 didFetchedResource:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)handleBackButton;
- (void)setupLynxView;
- (void)setupNaviBar;
- (void)loadFailedWithURL:(id)a0 error:(id)a1;
- (id)generateContext;
- (id)globalPropsWithURLString:(id)a0;
- (id)initWithTopSafeInset:(double)a0 withURL:(id)a1 containerWidth:(double)a2;
- (void).cxx_destruct;

@end
