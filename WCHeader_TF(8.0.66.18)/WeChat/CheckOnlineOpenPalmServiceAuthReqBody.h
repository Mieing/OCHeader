@class NSString;

@interface CheckOnlineOpenPalmServiceAuthReqBody : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sid;
@property (nonatomic) unsigned int palmCaptureMode;
@property (retain, nonatomic) NSString *sdkVersion;
@property (retain, nonatomic) NSString *phoneUuid;
@property (nonatomic) int phoneType;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) int canOpenPalmSide;
@property (nonatomic) int languageType;

+ (void)initialize;

@end
