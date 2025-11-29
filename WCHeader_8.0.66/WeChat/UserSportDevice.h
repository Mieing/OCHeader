@class NSString;

@interface UserSportDevice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *connProto;
@property (nonatomic) long long bleSimpleProtol;

+ (void)initialize;

@end
