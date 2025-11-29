@class NSString, NSMutableArray, BaseResponse;

@interface GetPayFunctionSwitchListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *functionList;
@property (retain, nonatomic) NSString *funcTypeName;
@property (retain, nonatomic) NSString *funcTypeDesc;

+ (void)initialize;

@end
