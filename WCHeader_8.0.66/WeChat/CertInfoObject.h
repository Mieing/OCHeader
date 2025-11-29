@class NSString;

@interface CertInfoObject : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceOs;
@property (nonatomic) unsigned int isCurDevice;
@property (retain, nonatomic) NSString *crtNo;

+ (void)initialize;

@end
