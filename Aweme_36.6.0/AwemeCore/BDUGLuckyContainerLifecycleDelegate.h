@class NSString, NSMutableSet;

@interface BDUGLuckyContainerLifecycleDelegate : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) NSMutableSet *aliveContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillDestory:(id)a0;
- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerWillConstructKitView:(id)a0 source:(long long)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)containerDidStartLoading:(id)a0;
- (void)container:(id)a0 didStartLoadingFailedWithUrl:(id)a1;
- (void)containerDidClose:(id)a0;
- (void)containerDeallocNotification:(id)a0;
- (id)sourceURLOfOriginURLString:(id)a0;
- (void)containerTerminated:(id)a0;
- (id)sourceURLOfContainer:(id)a0;
- (id)sourceURLOfOriginURLComp:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
