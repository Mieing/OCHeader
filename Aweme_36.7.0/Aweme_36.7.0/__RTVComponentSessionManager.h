@class NSString, NSMutableDictionary, NSRecursiveLock;
@protocol RTVVoipManagerInterface, RTVVoipContextManagerInterface;

@interface __RTVComponentSessionManager : HTSService <RTVComponentSessionController>

@property (retain) NSMutableDictionary *sessionMaps;
@property (retain) NSRecursiveLock *lock;
@property (readonly, nonatomic) id<RTVVoipManagerInterface> voipManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_addObserver;
- (id)invokeComponentContext:(id)a0;
- (id)activeVoIPs;
- (void)endComponentContext:(id)a0;
- (void)endComponentContextForControllerDealloc:(id)a0;
- (id)componentSession:(id)a0;
- (void)bindRoomIDForCaller:(id)a0 withComponentSession:(id)a1;
- (void)bindRoomIDForCallerAfterPutRequest:(id)a0 responseVoIP:(id)a1;
- (void)p_clearNoExistVoipIfNeeded;
- (void)p_clearComponentContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)handleDidBecomeActive;

@end
