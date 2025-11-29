@class NSString;

@interface AppMsgVideoUrlInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int formatId;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) unsigned long long filesize;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int totalRange;
@property (nonatomic) unsigned int videoQualityLevel;
@property (retain, nonatomic) NSString *videoQualityWording;
@property (nonatomic) unsigned int trafficPopupFlag;

+ (void)initialize;

@end
