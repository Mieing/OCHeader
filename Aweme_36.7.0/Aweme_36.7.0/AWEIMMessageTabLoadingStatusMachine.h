@class NSTimer, NSString;
@protocol IESLCConnectManagerProtocol, IESIMThrottleDebounceAction;

@interface AWEIMMessageTabLoadingStatusMachine : NSObject <IESLCConnectService, AWEUserMessage>

@property (nonatomic) long long currentStatus;
@property (nonatomic) unsigned long long recentLinkStatus;
@property (nonatomic) unsigned long long wsStatus;
@property (nonatomic) unsigned long long networkStatus;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> recentLinkStatusDebounce;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> wsStatusDebounce;
@property (retain, nonatomic) id<IESIMThrottleDebounceAction> networkStatusDebounce;
@property (nonatomic) BOOL canTransferToFetching;
@property (nonatomic) BOOL canTransferToConnecting;
@property (retain, nonatomic) NSTimer *timeoutTimer;
@property (copy, nonatomic) id /* block */ statusUpdateBlock;
@property (weak, nonatomic) id<IESLCConnectManagerProtocol> connectManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)ieslc_onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)p_updateStatus:(long long)a0;
- (void)p_makeInitialStatus;
- (void)handleRecentLinkRequestStart:(id)a0;
- (void)handleRecentLinkRequestEnd:(id)a0;
- (id)p_statusCode;
- (void)p_resetTransferFlags;
- (void)p_transferToNextStatus:(unsigned long long)a0;
- (BOOL)p_updateNetworkStatusIfNeededUseBTD;
- (BOOL)p_updateNetworkStatus:(id)a0;
- (BOOL)p_updateWSStatus:(unsigned long long)a0;
- (void)p_timeoutResetStatus;
- (void)p_tryToTransfer:(long long)a0 event:(unsigned long long)a1;
- (BOOL)p_isFinalStatus;
- (void).cxx_destruct;
- (void)networkStateDidChange:(id)a0;
- (void)start;
- (void)dealloc;
- (void)appWillEnterForeground;

@end
