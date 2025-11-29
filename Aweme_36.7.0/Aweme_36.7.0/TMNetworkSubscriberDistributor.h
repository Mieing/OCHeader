@class NSArray;

@interface TMNetworkSubscriberDistributor : NSObject

@property (retain, nonatomic) NSArray *requestSubscribers;
@property (retain, nonatomic) NSArray *responseSubscribers;

+ (id)networkSyncRequestSubscribers;
+ (id)networkAsyncRequestSubscribers;
+ (id)networkSyncResponseSubscribers;
+ (id)networkAsyncResponseSubscribers;
+ (id)subscribers:(BOOL)a0;
+ (id)sharedInstance;

- (void)distributeEventWithContext:(id)a0;
- (BOOL)canSubscriber:(Class)a0 handleAspectType:(id)a1;
- (void).cxx_destruct;

@end
