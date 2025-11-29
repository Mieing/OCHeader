@class NSArray, NSMutableDictionary;

@interface TMAPIControlTaskBrokerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *brokers;
@property (copy, nonatomic) NSArray *brokerOrder;

+ (id)sharedManager;

- (void)registerTaskBroker:(id)a0;
- (void)setupBrokerOrder:(id)a0;
- (id)nextBrokerToTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
