@class NSString;

@interface AffUnifyDeviceInfo : WXPBGeneratedMessage

@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *devicePath;
@property (retain, nonatomic) NSString *deviceNickname;
@property (retain, nonatomic) NSString *deviceUuid;
@property (retain, nonatomic) NSString *uriPath;
@property (retain, nonatomic) NSString *deviceRemark;
@property (nonatomic) BOOL isOnline;

+ (void)initialize;

@end
