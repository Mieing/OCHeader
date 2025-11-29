@class NSString, BaseResponse;

@interface CheckSmsCanAddCardResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardExt;

+ (void)initialize;

@end
