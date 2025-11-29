@class NSString;

@interface WxaExternalInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *hostAppid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sourceEnv;
@property (nonatomic) unsigned long long svrTimeMs;
@property (nonatomic) unsigned int reqTiming;

+ (void)initialize;

@end
