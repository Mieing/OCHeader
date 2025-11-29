@interface MigrationPlatformCallback : NSObject {
    struct MigrationPlatformDispatcherBridgeObjcImpl { void /* function */ **x0; struct MigrationPlatformDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct MigrationPlatformDispatcherBridgeObjcImpl { void /* function */ **x0; struct MigrationPlatformDispatcherCallback *x1; id x2; } *)a0;
- (void)onDoOfflineCgiComplete:(unsigned long long)a0 errType:(int)a1 errCode:(int)a2 errMsg:(id)a3 respBuf:(id)a4;
- (void)onGetAllConversationComplete:(unsigned long long)a0 convList:(id)a1;
- (void)onGetAllConversationForUserNameComplete:(unsigned long long)a0 convList:(id)a1;
- (void)onCommonCallPlatform2Complete:(unsigned long long)a0 rpcResp:(id)a1;
- (void)onGetPcMinVersionComplete:(unsigned long long)a0 windows:(int)a1 mac:(int)a2 linux:(int)a3 ohosPc:(int)a4;
- (void)onCheckPermissionComplete:(unsigned long long)a0 checked:(BOOL)a1;
- (void)onGetWifiNameComplete:(unsigned long long)a0 wifiName:(id)a1;
- (void)onNetworkChangedEvent;

@end
