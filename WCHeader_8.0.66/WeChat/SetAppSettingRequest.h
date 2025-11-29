@class BaseRequest, NSString;

@interface SetAppSettingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSString *cmdValue;

+ (void)initialize;

@end
