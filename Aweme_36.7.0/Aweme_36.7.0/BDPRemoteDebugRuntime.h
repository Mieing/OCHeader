@class NSTimer, NSString, NSRecursiveLock, BDPRemoteDebugAgent, NSMutableDictionary, NSDictionary, BDPRemoteDebugReplayManager, BDPConnectionStatus;

@interface BDPRemoteDebugRuntime : BDPRuntime <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPRemoteDebugAgentDelegate, BDPDebugRuntimeProtocol> {
    NSMutableDictionary *_scriptHash;
}

@property (copy, nonatomic) NSDictionary *methodMapping;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *quickTriggerTimer;
@property (retain, nonatomic) NSRecursiveLock *responseDictLocker;
@property (retain, nonatomic) NSMutableDictionary *networkResponseDict;
@property (retain, nonatomic) BDPConnectionStatus *connectionStatus;
@property (retain, nonatomic) BDPRemoteDebugReplayManager *replayManager;
@property (nonatomic) long long reconnectDelayTime;
@property (nonatomic) long long reconnectMaxCount;
@property (nonatomic) BOOL isIPV4;
@property (copy, nonatomic) NSString *selectServerURLString;
@property (copy, nonatomic) NSString *localServerURLString;
@property (copy, nonatomic) NSString *roomServerURLString;
@property (nonatomic) BOOL repeatTrackeEvent;
@property (retain, nonatomic) BDPRemoteDebugAgent *debugAgent;
@property (nonatomic) int ideInspectVersion;
@property (copy, nonatomic) NSString *uniqueTimeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ publishDebugCommandsToWebViewBlock;

- (void)webSocketDidOpen:(id)a0;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationJscDomReadyWithUniqueID:(id)a0;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)setupDebugger;
- (void)sendEvent2DebugWithType:(id)a0 pageId:(long long)a1;
- (void)asyncSendDomMessage:(id)a0;
- (void)sendAutoTestReplayResultToIDE:(id)a0;
- (void)sendAppOnlineToIDE;
- (void)sendPingToIDE;
- (void)sendAppCloseToIDE;
- (void)updateUniqueID:(id)a0;
- (void)sendRequestParamToIDE:(id)a0;
- (void)webSocketDidReceiveCDPCallBackMessage:(id)a0;
- (void)webSocketDidReceiveDomMessage:(id)a0;
- (void)webSocketManager:(id)a0 didFailWithError:(id)a1;
- (void)webSocketManager:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)webSocketDidReceiveMessage:(id)a0;
- (void)webSocketDidReceiveEvent:(id)a0;
- (id)initWithLynxBackgroundRuntime:(id)a0;
- (void)resetRemoteDebugDir;
- (void)reconnectIfNeed;
- (void)invalidateQuickTriggerTimer;
- (void)setInitDebugRuntimeStatus;
- (void)connectRemoteDebugSocket;
- (void)sendInitToIDE:(id /* block */)a0;
- (id)addIDToIDEServerURL:(id)a0 queryParameter:(id)a1;
- (id)projectType;
- (void)continueReplayAfterCleanCache;
- (BOOL)shouldSwitchToRoomServer;
- (void)setCloseConnectionStatus;
- (void)sendRemoveStorageToIDE:(id)a0;
- (void)sendCommandToWebView:(id)a0 pageID:(long long)a1;
- (void)sendQuickJSErrorToIDE:(id)a0 withSource:(id)a1;
- (void)sendResponseDataToIDE:(id)a0;
- (void)sendRequestFailedToIDE:(id)a0;
- (void)sendSetStorageToIDE:(id)a0;
- (void)sendUpdateStorageToIDE:(id)a0;
- (void)sendClearStorageToIDE;
- (void)sendAppDataToIDE:(id)a0 withWebviewId:(id)a1 route:(id)a2;
- (void)sendRouteToIDEWithWebviewId:(id)a0 route:(id)a1 renderType:(id)a2;
- (void)scriptEvaluated:(id)a0 withSourceURL:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateTimer;
- (void)dealloc;
- (id)getCurrentTime;

@end
