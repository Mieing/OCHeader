@class NSString;

@interface AmoebaSentinelService : NSObject <AmoebaSentinelWsProtocol, AmoebaWSMessageDelegate, AmoebaStnDelegate>

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL wsConnect;
@property (nonatomic) unsigned int connectEnvi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)initScreenInfo;
- (id)sharedSerialQueue;
- (void)bindSessionId:(id)a0;
- (void)connectWebSocket;
- (void)captureScreenshotDelay;
- (void)captureScreenshot;
- (BOOL)uploadScreenshot:(id)a0 pageName:(id)a1;
- (void)captureScreenNodeInfosDelay;
- (void)captureScreenNodeInfos;
- (BOOL)uploadScreenNodeInfos:(id)a0 pageName:(id)a1;
- (void)uploadReportInfo:(id)a0 time:(unsigned long long)a1 routeType:(unsigned long long)a2 routeRule:(unsigned long long)a3 params:(id)a4;
- (void)didReceiveMessage:(id)a0;
- (void)didCloseWithCode:(long long)a0 reason:(id)a1 wasClean:(BOOL)a2;
- (void)didFailWithError:(id)a0;
- (void)didReceivePong:(id)a0;
- (void)didReceiveMessage2:(id)a0;
- (void)onWsConnected;
- (void)onWsBindSessionId;
- (void)onWsUploadScreenshot;
- (void)onWsUploadScreenNodeInfo;
- (void)onWsClosed;
- (void).cxx_destruct;

@end
