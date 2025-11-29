@class BaseRequest, NSString;

@interface LogOutWebWxRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int targetDeviceType;
@property (nonatomic) unsigned int targetClientVersion;
@property (retain, nonatomic) NSString *uuid;

+ (void)initialize;

@end
