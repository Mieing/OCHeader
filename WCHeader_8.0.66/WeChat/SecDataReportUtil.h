@class NSString;

@interface SecDataReportUtil : MMUserService <KindaNotifyExt, MMServiceProtocol, MMKernelExt, WCPaySecInfoReportCgiDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkScreenRecording;
+ (BOOL)checkVoipCalling;
+ (BOOL)checkVpnConnect;

- (float)getScreenBrightness;
- (id)init;
- (void)onKindaNotify:(id)a0 value:(id)a1;
- (void)doReportInfo:(id)a0 eventName:(id)a1;
- (void)onSecInfoReportCgiOK:(int)a0 errorMessage:(id)a1;

@end
