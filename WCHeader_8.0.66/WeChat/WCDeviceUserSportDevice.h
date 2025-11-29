@class NSString;

@interface WCDeviceUserSportDevice : MMObject

@property (nonatomic) BOOL m_isHealThkitOrApp;
@property (retain, nonatomic) NSString *m_deviceId;
@property (retain, nonatomic) NSString *m_deviceType;
@property (retain, nonatomic) NSString *m_bundleId;
@property (retain, nonatomic) NSString *m_appName;
@property (retain, nonatomic) NSString *m_deviceName;
@property (retain, nonatomic) NSString *m_iconUrl;
@property (retain, nonatomic) NSString *m_iconName;
@property (retain, nonatomic) NSString *m_connProto;
@property (nonatomic) long long m_bleSimpleProtol;
@property (nonatomic) long long m_DID;
@property (nonatomic) unsigned int m_stepCount;

- (BOOL)isM7Device;
- (BOOL)isBLEDevice;
- (BOOL)isSimpleProfileDevcie;
- (void).cxx_destruct;

@end
