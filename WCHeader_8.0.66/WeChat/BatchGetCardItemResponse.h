@class NSString, BaseResponse;

@interface BatchGetCardItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *jsonRet;

+ (void)initialize;

@end
