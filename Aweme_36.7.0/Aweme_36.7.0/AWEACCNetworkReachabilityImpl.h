@class NSString;

@interface AWEACCNetworkReachabilityImpl : NSObject <ACCNetworkReachabilityProtocol>

@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addNotificationObserver:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)removeObserver:(id)a0;

@end
