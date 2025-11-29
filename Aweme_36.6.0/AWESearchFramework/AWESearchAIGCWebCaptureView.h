@class NSMutableDictionary, NSString, BDXBridgeEventSubscriber, UIView;
@protocol BDXViewContainerProtocol;

@interface AWESearchAIGCWebCaptureView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *readyToCaptureSubscriber;
@property (copy, nonatomic) id /* block */ webReadyCallback;
@property (copy, nonatomic) id /* block */ webLoadResultCallback;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)captureWithSchema:(id)a0 finishCallback:(id /* block */)a1;
- (void)startCaptureWithParams:(id)a0 completion:(id /* block */)a1;
- (void)scrollToDraw:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 perHeight:(double)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addObserver;
- (void)dealloc;
- (void)cancel;
- (void)removeObserver;

@end
