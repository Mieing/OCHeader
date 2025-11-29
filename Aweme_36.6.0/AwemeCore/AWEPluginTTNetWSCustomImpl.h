@class NSString, NSMutableDictionary;
@protocol BDPPluginTTNetWSCustomImplDelegate;

@interface AWEPluginTTNetWSCustomImpl : NSObject <BDPTTNetWSPluginDelegate, WsDelegate>

@property (retain, nonatomic) NSMutableDictionary *ttnetSocketInfoDict;
@property (retain, nonatomic) NSMutableDictionary *ttnetSockets;
@property (weak, nonatomic) id<BDPPluginTTNetWSCustomImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)onPushMessageReceived:(id)a0 message:(id)a1 type:(unsigned long long)a2;
- (void)onFeedbackLog:(id)a0 feedbacklog:(id)a1;
- (void)onConnectionErrorWithState:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2 error:(id)a3;
- (void)onConnectionStateChanged:(id)a0 connectionState:(unsigned long long)a1 url:(id)a2;
- (void)bdp_setDelegate:(id)a0;
- (void)closeAllTTNetSockets;
- (id)getPushManagerKey:(id)a0;
- (id)getPushManagerForTaskID:(id)a0;
- (BOOL)sendTTNetSocket:(id)a0 param:(id)a1;
- (BOOL)closeTTNetSocket:(id)a0 param:(id)a1;
- (long long)getSocketTaskIdForPushManager:(id)a0;
- (long long)getAWETTNetWSDataTypeFromTTNetDataType:(unsigned long long)a0;
- (id)getProtocolTypeForPushManager:(id)a0;
- (id)getUrlForPushManager:(id)a0;
- (id)getPushManagerStateString:(unsigned long long)a0;
- (BOOL)bdp_createTTNetSocketTaskWithUrl:(id)a0 taskID:(id)a1 param:(id)a2;
- (BOOL)bdp_operateTTNetSocketTaskWithParam:(id)a0 errMsg:(id *)a1;
- (void)bdp_closeAllTTNetSockets;
- (id)getHeaderForPushManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
