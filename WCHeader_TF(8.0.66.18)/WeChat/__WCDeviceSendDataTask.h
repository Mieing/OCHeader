@interface __WCDeviceSendDataTask : WCDeviceTask

@property long long m_sessionId;
@property int m_sendState;
@property (nonatomic) unsigned long long m_sendCGIFinishTime;

- (id)init;

@end
