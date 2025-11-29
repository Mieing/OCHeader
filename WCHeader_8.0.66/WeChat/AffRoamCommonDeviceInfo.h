@class NSString, NSData;

@interface AffRoamCommonDeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSData *specialInfoPb;

+ (void)initialize;

@end
