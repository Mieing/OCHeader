@interface WCDeviceTask : NSObject

@property (nonatomic) long long m_taskId;
@property (nonatomic) long long m_deviceId;
@property (nonatomic) unsigned short m_seq;
@property (nonatomic) struct AccessoryCmd { unsigned short x0; unsigned short x1; long long x2; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x3; struct AutoBuffer { char *x0; long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } x4; } *m_cmd;
@property (nonatomic) unsigned char m_req;
@property (nonatomic) unsigned char m_resp;

- (void)dealloc;

@end
