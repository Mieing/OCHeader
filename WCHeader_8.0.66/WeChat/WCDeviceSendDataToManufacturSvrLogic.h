@class NSMutableArray;
@protocol WCDeviceSendDataToManufacturSvrLogicDelegate;

@interface WCDeviceSendDataToManufacturSvrLogic : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_tasks;
    int m_appState;
}

@property long long m_sessionId;
@property (weak, nonatomic) id<WCDeviceSendDataToManufacturSvrLogicDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)willSuspend;
- (void)handleDeviceSendDataToManufacturerSvrReq:(long long)a0 :(unsigned short)a1 :(unsigned short)a2 :(struct _MmBp__SendDataRequest **)a3 SessionBuffer:(id)a4;
- (void)clearTimeoutTask;
- (void)handleSendMessageResponse:(unsigned long long)a0 Device:(id)a1 Error:(id)a2;
- (void)handleSvrResp:(id)a0;
- (void)handleWCDeviceCmdEnd:(long long)a0 ErrType:(int)a1 ErrCode:(int)a2 ErrMsg:(const char *)a3;
- (void)handleWCDeviceChannelStateChanged:(long long)a0 OldState:(int)a1 NewState:(int)a2;
- (void)handleDeviceLost:(unsigned long long)a0;
- (void)__sendRespToDevice:(id)a0 :(int)a1 :(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2;
- (void)__clearTaskById:(long long)a0;
- (id)__findTaskByTaskId:(long long)a0;
- (id)__findTaskBySessionId:(long long)a0;
- (void)handleSendWCDeviceMessageResponse:(id)a0;
- (void)sendWCDeviceMessageRequest:(id)a0;
- (void)sendWCDeviceMessageRequest:(id)a0 Retry:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
