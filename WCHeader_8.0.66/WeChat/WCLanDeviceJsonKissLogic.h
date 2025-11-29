@class NSString, NSMutableDictionary;

@interface WCLanDeviceJsonKissLogic : WCLanDeviceBaseKissLogic <IWCLanDeviceMgrExt, PBMessageObserverDelegate> {
    NSMutableDictionary *m_sendTaskMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 deviceData:(id)a1;
- (void)dealloc;
- (void)forwardData:(id)a0 toDevice:(id)a1 isThrouSever:(BOOL)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleDeviceMsgTransferAppMsg:(id)a0;
- (void)kissDeviceWithJsonStr:(id)a0 deviceType:(id)a1 deviceId:(id)a2;
- (void)onSendDataToWCLanDevice:(long long)a0 ErrCode:(int)a1;
- (BOOL)cancelTaskWithDevice:(id)a0;
- (void).cxx_destruct;

@end
