@class NSString;

@interface WCPayDigitalCertObject : NSObject

@property (retain, nonatomic) NSString *m_deviceName;
@property (retain, nonatomic) NSString *m_deviceOs;
@property (nonatomic) int m_isCurDevice;
@property (retain, nonatomic) NSString *m_crtNo;

+ (id)GenFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
