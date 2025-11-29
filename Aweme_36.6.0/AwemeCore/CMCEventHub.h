@class NSMutableDictionary, NSMutableArray;

@interface CMCEventHub : NSObject

@property (class, readonly, nonatomic) CMCEventHub *sharedHub;

@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *eventsMappedByID;

- (void)eventReceived:(id)a0;
- (id)subscribeEvent:(id)a0 inState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (id)subscribeEvent:(id)a0 withHandler:(id /* block */)a1;
- (id)eventWithEventID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
