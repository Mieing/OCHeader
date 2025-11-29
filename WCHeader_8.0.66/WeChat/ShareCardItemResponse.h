@class NSString, BaseResponse;

@interface ShareCardItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *jsonRet;

+ (void)initialize;

@end
