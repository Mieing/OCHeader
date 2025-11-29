@class BaseRequest;

@interface GetPayFunctionSwitchListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int tpaCountry;
@property (nonatomic) unsigned int funcType;
@property (nonatomic) unsigned int displayAllFlag;
@property (nonatomic) unsigned int gridType;

+ (void)initialize;

@end
