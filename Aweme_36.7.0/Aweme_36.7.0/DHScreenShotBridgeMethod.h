@class BDXBridgeEventSubscriber, NSString, UIView;
@protocol BDXViewContainerProtocol;

@interface DHScreenShotBridgeMethod : DHBaseBridgeMethod <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (Class)paramModelClass;
- (Class)resultModelClass;
- (void)callWithParamModel:(id)a0 completionHandlerWithTracker:(id /* block */)a1;
- (void)showNoAlbumPermissionAlertWithCert:(id)a0 cancelHandler:(id /* block */)a1 confirmHandler:(id /* block */)a2;
- (id)activityHosts;
- (void).cxx_destruct;
- (long long)authType;
- (void)reset;
- (id)methodName;

@end
