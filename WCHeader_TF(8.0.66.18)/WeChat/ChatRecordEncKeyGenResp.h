@class ChatRecordEnc, BaseResponse;

@interface ChatRecordEncKeyGenResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) ChatRecordEnc *enc;

+ (void)initialize;

@end
