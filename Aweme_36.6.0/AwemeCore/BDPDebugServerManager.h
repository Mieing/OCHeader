@class UINavigationController, NSObject, NSString, NSMutableDictionary, BDPUniqueID, SRWebSocket;
@protocol OS_dispatch_queue, BDPDebugServerConnectStateListener;

@interface BDPDebugServerManager : NSObject <BDPAutoTestable, SRWebSocketDelegate, BDPDebugServerNoticeViewDelegate> {
    id<BDPDebugServerConnectStateListener> _listener;
    NSString *_remoteServer;
    NSMutableDictionary *diffFiles;
    SRWebSocket *_socket;
    NSObject<OS_dispatch_queue> *_gcdQueue;
}

@property (nonatomic) double connectTime;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) UINavigationController *topNavi;
@property (readonly, nonatomic) SRWebSocket *socket;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *gcdQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)registerSchema;
+ (id)dataWithContent:(id)a0;
+ (id)sharedInstance;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (void)onCancelButtonClicked;
- (BOOL)autoTestWithParam:(id)a0;
- (void)send_ide:(unsigned long long)a0 to:(id)a1;
- (void)recv_phone:(id)a0;
- (void)onOKButtonClicked:(id)a0 listener:(id)a1;
- (void)onOKButtonClicked:(id)a0 localServer:(id)a1 listener:(id)a2;
- (id)filesOverrideWithUniqueID:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)connect:(id)a0;

@end
