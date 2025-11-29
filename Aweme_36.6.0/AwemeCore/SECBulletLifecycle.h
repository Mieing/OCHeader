@class NSString;

@interface SECBulletLifecycle : NSObject <BDXContainerLifecycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
