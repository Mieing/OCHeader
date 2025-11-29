@class NSString, NSMutableArray, BaseResponse;

@interface PaymentFunctionSearchResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSMutableArray *funcList;

+ (void)initialize;

@end
