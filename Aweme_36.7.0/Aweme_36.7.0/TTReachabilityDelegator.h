@class NSString, NSObject;
@protocol OS_dispatch_semaphore;

@interface TTReachabilityDelegator : NSObject <CTTelephonyNetworkInfoDelegate>

@property (copy, nonatomic) NSString *dataServiceIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dataServiceIdentifierLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDelegator;
+ (BOOL)resolveInstanceMethod:(SEL)a0;

- (void).cxx_destruct;

@end
