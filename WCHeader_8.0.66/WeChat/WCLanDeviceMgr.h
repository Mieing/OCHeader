@class NSRecursiveLock, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCLanDeviceMgr : MMUserService <MMServiceProtocol> {
    long long m_taskId;
    NSMutableArray *m_tasks;
    NSRecursiveLock *m_lock;
    int m_libInitCount;
    NSObject<OS_dispatch_queue> *m_myQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)initWCLanDeviceLib;
- (long long)releaseWCLanDeviceLib;
- (long long)startScanWCLanDevice;
- (long long)stopScanWCLanDevice;
- (long long)cancelWCLanDeviceTask:(long long)a0;
- (long long)connectToWCLanDevice:(id)a0 DeviceId:(id)a1 willRetryConnect:(BOOL)a2;
- (long long)disconnectToWCLanDevice:(id)a0 DeviceId:(id)a1;
- (long long)sendDataToWCLanDevice:(id)a0 DeviceId:(id)a1 JsonMsg:(id)a2;
- (long long)sendFileToWCLanDevice:(id)a0 DeviceId:(id)a1 JsonMsg:(id)a2 Paht:(id)a3;
- (void)c2objc_onReceiveWCLanDeviceDiscPackage:(id)a0;
- (void)c2objc_onReceiveWCLanDeviceProfile:(id)a0;
- (void)c2objc_onWCLanDeviceUdpError:(int)a0;
- (void)c2objc_onWCLanReceiveResponse:(int)a0 Data:(id)a1;
- (void)c2objc_onWCLanDeviceConnectStateNotify:(id)a0 StateCode:(int)a1;
- (void)c2objc_onWCLanFileTransferUpdate:(int)a0 Data:(id)a1;
- (void)c2objc_onWCLanReceiveNotify:(id)a0 Data:(id)a1;
- (BOOL)genDeviceInfo:(id)a0 DeviceId:(id)a1 AndBuffer:(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2;
- (BOOL)genSendFileRequestInfo:(id)a0 FileName:(id)a1 AndBuffer:(struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a2;
- (void)safeAddTask:(id)a0;
- (id)getTaskForTaskId:(long long)a0;
- (void)deleteTask:(long long)a0;
- (id)getTaskForSubTaskId:(int)a0;
- (id)getDictionaryFromJson:(id)a0;
- (void)sendAsync:(long long)a0 DeviceType:(id)a1 DeviceID:(id)a2 MSG:(id)a3;
- (void).cxx_destruct;

@end
