@class NSString;

@interface SECEventFlowBulletLifeCycle : NSObject <BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (void)setup;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerOnShow:(id)a0 sourceParam:(id)a1;
- (void)containerOnHide:(id)a0 sourceParam:(id)a1;
- (void)containerWillStartLoading:(id)a0;
- (void)postContainerNotification:(id)a0 stage:(id)a1;

@end
