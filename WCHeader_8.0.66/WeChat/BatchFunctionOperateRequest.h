@class BaseRequest, NSMutableArray;

@interface BatchFunctionOperateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *operateFunctionList;
@property (nonatomic) unsigned int tpaCountry;
@property (nonatomic) unsigned int funcType;

+ (void)initialize;

@end
