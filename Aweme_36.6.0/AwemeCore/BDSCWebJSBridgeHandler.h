@class BDByteScreenCastContext;
@protocol BDSCWebJSBridgeHandlerDelegate;

@interface BDSCWebJSBridgeHandler : NSObject

@property (retain, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (weak, nonatomic) id<BDSCWebJSBridgeHandlerDelegate> delegate;

- (void)invokeWithArgs:(id)a0;
- (id)invokeWithAction:(id)a0 uuid:(id)a1 params:(id)a2;
- (void)onPlayProgressChanged:(id)a0;
- (void)invokeWebEvent:(id)a0 uuid:(id)a1 params:(id)a2;
- (void)onPlayError:(id)a0;
- (void)onDidFindDevices:(id)a0;
- (void)onConnectResult:(id)a0 error:(id)a1;
- (void)onPlayStateChanged:(unsigned long long)a0;
- (void)onEventWith:(id)a0 messageJson:(id)a1;
- (void)onSwitchDecodeResult:(long long)a0;
- (void)onReplyAckWith:(id)a0 errorCode:(long long)a1 errorMessage:(id)a2;
- (void)invokeWebEvent:(id)a0 params:(id)a1;
- (BOOL)connectWithUuid:(id)a0 params:(id)a1;
- (void)startSearchWithUuid:(id)a0 params:(id)a1;
- (void)stopSearchWithUuid:(id)a0 params:(id)a1;
- (void)disconnectWithUuid:(id)a0 params:(id)a1;
- (void)playWithUuid:(id)a0 params:(id)a1;
- (void)openSchemaWithUuid:(id)a0 params:(id)a1;
- (void)stopCastWithUuid:(id)a0 params:(id)a1;
- (void)resumeWithUuid:(id)a0 params:(id)a1;
- (void)pauseWithUuid:(id)a0 params:(id)a1;
- (void)seekWithUuid:(id)a0 params:(id)a1;
- (void)sendEventWithUuid:(id)a0 params:(id)a1;
- (id)diagnosisFeedbackWithUuid:(id)a0 params:(id)a1;
- (id)diagnosisSearchFailWithUuid:(id)a0 params:(id)a1;
- (void)useSoftwareDecodeWithUuid:(id)a0 params:(id)a1;
- (void)jumpToSystemSettingWithUuid:(id)a0 params:(id)a1;
- (id)getEventParamsWithUuid:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
