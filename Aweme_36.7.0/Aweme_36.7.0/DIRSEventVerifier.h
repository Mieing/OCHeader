@class NSString, DIRSConcurrentCollection, DIRSContext;
@protocol IRISNetworkProvider, IRISServiceSchema;

@interface DIRSEventVerifier : DIRSBasicModule <IRISModule, IRISEventObserver, IRISURLHandler, IRISTimer> {
    BOOL busy;
    DIRSConcurrentCollection *packet;
    id<IRISServiceSchema> schema;
    id<IRISNetworkProvider> networking;
    NSString *endpoint;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property double tickTime;

+ (id)moduleId;
+ (id)moduleVersion;

- (double)timerInterval;
- (void)onTimerTick;
- (void)onEventStored:(id)a0;
- (void)sendEvents;
- (void)_bindDevice:(id)a0;
- (id)getPacker;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;

@end
