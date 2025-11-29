@class BDXBridgeEventSubscriber, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface BDUGLuckyScreenShotXBridge : BDUGLuckyXBridgeMethod <BDXContainerLifecycleProtocol>

@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (id)replaceSchemeHostPathWithURLString:(id)a0;
- (void)takeScreenshotToAlbumWithScreenshotImage:(id)a0 paramModel:(id)a1 completion:(id /* block */)a2;
- (void)takeScreenshotToFilename:(id)a0 completion:(id /* block */)a1;
- (void)takeScreenshotToAlbumWithCompletion:(id /* block */)a0 paramModel:(id)a1;
- (void)saveToFilename:(id)a0 withImage:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)takeScreenshot;
- (void)reset;
- (id)methodName;

@end
