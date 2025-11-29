@class BaseRequest;

@interface GetAllFunctionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int tpaCountry;
@property (nonatomic) BOOL isInit;

+ (void)initialize;

@end
