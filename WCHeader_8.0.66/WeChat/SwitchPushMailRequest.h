@class BaseRequest, NSString;

@interface SwitchPushMailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int switchValue;
@property (retain, nonatomic) NSString *secPwdMd5;

+ (void)initialize;

@end
