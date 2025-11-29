@class NSString, NSMutableArray;

@interface PNSNetworkImpl : NSObject <PNSNetworkProtocol>

@property (retain, nonatomic) NSMutableArray *blocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)__pnsNetworkStatusFromTTReachabilityStatus:(long long)a0;
- (void)receiveNetworkChangedNotification:(id)a0;
- (void)registerNetworkChangeHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)currentNetworkStatus;

@end
