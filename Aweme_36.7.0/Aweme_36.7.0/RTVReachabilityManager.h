@class NSString, RxMultipleDelegate;
@protocol RTVReachabilityManagerDelegate;

@interface RTVReachabilityManager : NSObject <RTVReachabilityManagerInterface>

@property (readonly, nonatomic) RxMultipleDelegate<RTVReachabilityManagerDelegate> *delegates;
@property (nonatomic) BOOL networkIsReachable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__handleReachaiblityChangeNotification:(id)a0;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isReachable;
- (BOOL)__isReachable;

@end
