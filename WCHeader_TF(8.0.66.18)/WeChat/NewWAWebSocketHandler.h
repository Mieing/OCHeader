@class NSString, NSMutableDictionary, WAAppTask, NSObject, WAWebSocketConfig;
@protocol OS_dispatch_queue;

@interface NewWAWebSocketHandler : NSObject <WCWebSocketMgrExt> {
    NSString *_appID;
    WAAppTask *_appTask;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAWebSocketConfig *_webSocketConfig;
    unsigned int _appType;
    unsigned int _appDebugModeType;
    BOOL _tcpNoDelay;
    BOOL _perMessageDeflate;
    BOOL _isOpenProfile;
    NSMutableDictionary *_dicTaskID2WCID;
    NSMutableDictionary *_dicWCID2TaskIDAndHandler;
}

@property (nonatomic) unsigned int workerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppID:(id)a0 appVersion:(unsigned long long)a1 appType:(unsigned int)a2 appDebugModeType:(unsigned int)a3 workerQueue:(id)a4 context:(id)a5;
- (void)dealloc;
- (void)openWithTaskID:(id)a0 url:(id)a1 httpHeaders:(id)a2 isIgnoreCheckDomain:(BOOL)a3 subProtocols:(id)a4 context:(id)a5 isOpenProfile:(BOOL)a6 completionHandler:(id /* block */)a7 openHandler:(id /* block */)a8 closeHandler:(id /* block */)a9 errorHandler:(id /* block */)a10 messageHandler:(id /* block */)a11;
- (void)closeWithTaskID:(id)a0 code:(long long)a1 reason:(id)a2 completionHandler:(id /* block */)a3;
- (void)sendString:(id)a0 taskID:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendData:(id)a0 taskID:(id)a1 completionHandler:(id /* block */)a2;
- (void)closeAllTaskWithReason:(id)a0;
- (void)closeAllTaskAndReleaseImmediately;
- (BOOL)isReachMaxConcurrentCount;
- (unsigned long long)getTaskCount;
- (id)getTaskWithTaskID:(id)a0;
- (id)getTaskHandlerWithWCID:(id)a0;
- (id)getAllTask;
- (void)addTask:(id)a0 wcwssID:(id)a1 wahandler:(id)a2;
- (void)removeTask:(id)a0 wcwssID:(id)a1;
- (void)removeAllTask:(BOOL)a0;
- (id)genNewSocketTaskID;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didReceiveMessage:(id)a2;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didOpenWithCode:(long long)a2 success:(BOOL)a3 headers:(id)a4 profiles:(id)a5 msg:(id)a6;
- (void)webSocket:(unsigned int)a0 group:(id)a1 didCloseWithCode:(long long)a2 reason:(id)a3;
- (void)destroyWeAppAllSocket:(id)a0;
- (void).cxx_destruct;

@end
