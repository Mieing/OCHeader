@class NSString;

@interface VerifyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *jsapiName;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int verifyOk;

+ (void)initialize;

@end
