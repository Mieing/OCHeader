@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, TTVideoEngineEventManagerProtocol;

@interface TTVideoEngineEventManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *latestEvents;
@property (nonatomic) long long eventVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (weak, nonatomic) id<TTVideoEngineEventManagerProtocol> delegate;
@property (weak, nonatomic) id<TTVideoEngineEventManagerProtocol> innerDelegate;

+ (id)sharedManager;

- (id)popAllEvents;
- (void)addEventV2:(id)a0 eventName:(id)a1;
- (id)feedbackEvents;
- (void).cxx_destruct;
- (id)init;
- (void)setLogVersion:(long long)a0;
- (void)addEvent:(id)a0;
- (long long)logVersion;

@end
