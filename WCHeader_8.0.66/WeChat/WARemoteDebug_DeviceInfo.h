@class NSString;

@interface WARemoteDebug_DeviceInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *wechatVersion;
@property (nonatomic) unsigned int publibVersion;
@property (nonatomic) float screenWidth;
@property (nonatomic) float pixelRatio;
@property (retain, nonatomic) NSString *userAgent;

+ (void)initialize;

@end
