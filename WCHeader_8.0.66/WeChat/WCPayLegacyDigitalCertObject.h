@class NSString;

@interface WCPayLegacyDigitalCertObject : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceOs;
@property (nonatomic) int isCurDevice;
@property (retain, nonatomic) NSString *crtNo;

+ (void)initialize;

@end
