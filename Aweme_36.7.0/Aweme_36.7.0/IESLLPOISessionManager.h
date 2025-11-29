@class NSString, NSMutableDictionary;

@interface IESLLPOISessionManager : NSObject <IESLLPOISessionManagerProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSMutableDictionary *storeParams;
@property (retain, nonatomic) NSMutableDictionary *storeEvents;
@property (retain, nonatomic) NSMutableDictionary *keyChangeHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)storeInfoInSession:(id)a0 info:(id)a1;
- (void)startSessionWithSessionID:(id)a0;
- (BOOL)storeInfoInSession:(id)a0 info:(id)a1 caller:(id)a2;
- (BOOL)appendInfoInSession:(id)a0 info:(id)a1 targetKey:(id)a2;
- (BOOL)poi_setStoreParams:(id)a0 toSessionID:(id)a1;
- (id)poi_fetchStoreParamsWithSessionID:(id)a0;
- (BOOL)poi_callLynxEvent:(id)a0 params:(id)a1 inSession:(id)a2;
- (BOOL)poi_registerLynxEvent:(id)a0 containerID:(id)a1 inSession:(id)a2;
- (BOOL)poi_removeLynxEvent:(id)a0 containerID:(id)a1 inSession:(id)a2;
- (id)getKeyChangeHistoryById:(id)a0;
- (void)updateKeyChangeHistoryById:(id)a0 info:(id)a1 caller:(id)a2;
- (void)notifyLynxSessionInfoChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)startSession;
- (void)dealloc;
- (id)fetchSessionInfo:(id)a0;
- (void)stopSession:(id)a0;

@end
