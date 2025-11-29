@class AWEHPMessageManagerConfig, NSMutableDictionary, MMKV, NSString;

@interface AWEHPMessageManager : NSObject <AWEHPMessageManagerProtocol, AWEHPMessageDataObserverProtocol>

@property (retain, nonatomic) AWEHPMessageManagerConfig *config;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;
@property (retain, nonatomic) NSMutableDictionary *trackLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)revokeMessageIfNeedWithCmd:(long long)a0 res:(id)a1 version:(long long)a2;
- (void)registerMessageObserver:(id)a0 withCmd:(long long)a1 res:(id)a2;
- (id)getMessageWithCmd:(long long)a0 res:(id)a1;
- (void)handleHPMessageData:(id)a0;
- (id)p_readMessageWithCmd:(long long)a0 res:(id)a1;
- (id)keyWithCmd:(long long)a0 res:(id)a1;
- (void)p_revokeMessageIfNeedWithCmd:(long long)a0 res:(id)a1 version:(long long)a2;
- (BOOL)p_checkMessageDataValid:(id)a0 error:(id *)a1;
- (id)p_writeMessageData:(id)a0;
- (void)p_sendMsg:(id)a0 withObservers:(id)a1;
- (id)p_getCacheMessageWithCmd:(long long)a0 res:(id)a1 error:(id *)a2;
- (void)trackMessageReadIfNeedWithCmd:(long long)a0 res:(id)a1 params:(id)a2;
- (void)trackMessageRevokeWithParams:(id)a0;
- (BOOL)p_cacheMessage:(id)a0;
- (BOOL)p_checkMessageValid:(id)a0 error:(id *)a1;
- (void)trackMessageHandleWithMessage:(id)a0 status:(long long)a1 localVersion:(id)a2 errorCode:(id)a3;
- (void)unregisterMessageObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
