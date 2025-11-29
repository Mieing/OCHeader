@class NSMapTable, NSString, CGFrontierInstructionCache, NSObject, TTPushManager;
@protocol OS_dispatch_queue;

@interface CGFrontierManager : NSObject <WsDelegate>

@property (retain, nonatomic) NSMapTable *handlers;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (retain, nonatomic) TTPushManager *pushManager;
@property (retain, nonatomic) CGFrontierInstructionCache *instCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)onFrontierMessageReceived:(id)a0 message:(id)a1;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)registerFrontierDelegate:(id)a0 forIdentifier:(id)a1;
- (void)sendFrontierInstruction:(id)a0;
- (void)removeFrontierDelegateForIdentifier:(id)a0;
- (void)setupFrontier;
- (void)_sendFrontierInstruction:(id)a0;
- (void)_dispatchFrontierInstruction:(id)a0;
- (void)_dispatchFrontierConnectionFailed:(id)a0 with:(long long)a1;
- (void)_flushAllInstructions;
- (void)_dispatchFrontierStateChanged:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (int)_currentNetworkType;

@end
