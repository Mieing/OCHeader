@class NSString, CastProxyConfiguration, BDByteScreenCastContext;

@interface BDSCLocalCastServiceIMP : NSObject <CastProxyMonitorDelegate, CastProxyLogDelegate, BDCastProxyServerDelegate, BDSCLocalCastService>

@property (retain, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) CastProxyConfiguration *config;
@property (nonatomic) BOOL showingAlert;
@property (nonatomic) BOOL optionStatus;
@property (nonatomic) BOOL closePanelFromActionButton;
@property (nonatomic) BOOL hasActiveRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindContext:(id)a0;
- (BOOL)enableLocalCast;
- (BOOL)openLocalCast;
- (BOOL)isLocalCastUrl:(id)a0;
- (id)fetchProxyURLWithOriginalURL:(id)a0 mediaType:(id)a1;
- (void)stopLocalCast;
- (void)showLocalCastAlert:(BOOL)a0 isLandscape:(BOOL)a1 block:(id /* block */)a2;
- (void)showLocalCastOptionAlert:(BOOL)a0;
- (BOOL)shouldKeepAliveForCastProxy;
- (void)onAppInfoUpdate;
- (void)logWithSDKMessage:(id)a0 level:(id)a1;
- (void)onEventWithName:(id)a0 params:(id)a1;
- (void)onVerboseWithMessage:(id)a0;
- (void)onDebugWithMessage:(id)a0;
- (void)onInfoWithMessage:(id)a0;
- (void)onWarnWithMessage:(id)a0;
- (void)onErrorWithMessage:(id)a0;
- (BOOL)usePanel;
- (void)showInfoPanelWithTitle:(id)a0 detail:(id)a1 isLandscape:(BOOL)a2 actions:(id)a3 dismissCompletion:(id /* block */)a4;
- (void)showLocalCastOptionPanel:(BOOL)a0;
- (void)webServerDidStart;
- (void)webServerDidConnect;
- (void)webServerDidDisconnect;
- (void)webServerDidStop;
- (void)showLocalCastAlert:(BOOL)a0 block:(id /* block */)a1;
- (void)showLocalCastOptionAlert;
- (void).cxx_destruct;

@end
