@class NSString, BaseResponse;

@interface AcceptCardListFromAppResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonRet;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;

+ (void)initialize;

@end
