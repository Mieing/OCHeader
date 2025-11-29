@class NSString, JSEvent;

@interface WCLanDeviceEvent : MMObject

@property (retain, nonatomic) NSString *m_deviceId;
@property (retain, nonatomic) JSEvent *m_event;
@property (nonatomic) long long m_cmd;

- (void).cxx_destruct;

@end
