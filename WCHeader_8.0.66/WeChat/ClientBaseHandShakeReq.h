@class NSData, NSString;

@interface ClientBaseHandShakeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *deviceRandom;
@property (retain, nonatomic) NSData *wxappRandom;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int hwClientVersion;
@property (retain, nonatomic) NSString *hwDeviceType;

+ (void)initialize;

@end
