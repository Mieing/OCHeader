@class NSString, HMDTTMonitor;

@interface SpeechEngineMonitor : NSObject

@property (retain, nonatomic) NSString *hostAppID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) HMDTTMonitor *monitorManager;

- (id)getDirectiveName:(long long)a0;
- (id)getMessageName:(int)a0;
- (id)initMonitorWithHostAppID:(id)a0 deviceID:(id)a1 sdkVersion:(id)a2;
- (void)monitorDirectiveWithEngineName:(id)a0 directiveType:(long long)a1 data:(id)a2 errorCode:(long long)a3 extDic:(id)a4;
- (void)monitorMessageWithEngineName:(id)a0 messageType:(int)a1 data:(id)a2 extDic:(id)a3;
- (void).cxx_destruct;

@end
