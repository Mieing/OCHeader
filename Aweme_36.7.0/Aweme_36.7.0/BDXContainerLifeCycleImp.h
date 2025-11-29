@class NSString;

@interface BDXContainerLifeCycleImp : NSObject <BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerImp;
+ (id)shared;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerDidFirstScreen:(id)a0;

@end
