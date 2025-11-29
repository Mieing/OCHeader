@class NSString;

@interface WCLanDeviceTask : NSObject

@property (retain, nonatomic) NSString *m_deviceType;
@property (retain, nonatomic) NSString *m_deviceId;
@property (nonatomic) long long m_taskId;
@property (nonatomic) long long m_taskCmd;
@property (nonatomic) int m_subTaskId;

- (void).cxx_destruct;

@end
