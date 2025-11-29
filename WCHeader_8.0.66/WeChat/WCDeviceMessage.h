@class NSData, WCDevice;

@interface WCDeviceMessage : NSObject

@property (nonatomic) unsigned long long m_sessionID;
@property (retain, nonatomic) NSData *m_data;
@property (retain, nonatomic) WCDevice *m_device;
@property (retain, nonatomic) NSData *m_sessionBuffer;
@property (nonatomic) unsigned int m_type;

- (void).cxx_destruct;

@end
