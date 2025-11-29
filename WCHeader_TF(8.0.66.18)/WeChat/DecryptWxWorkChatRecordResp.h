@class NSString, BaseResponse;

@interface DecryptWxWorkChatRecordResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *content;

+ (void)initialize;

@end
