@class NSString, NSData;

@interface WCDeviceSvrMsg : NSObject

@property (nonatomic) int m_type;
@property (retain, nonatomic) NSString *m_deviceId;
@property (retain, nonatomic) NSString *m_deviceType;
@property (nonatomic) long long m_sessionId;
@property (retain, nonatomic) NSData *m_data;
@property (nonatomic) unsigned int m_wifiStatus;

- (void).cxx_destruct;

@end
