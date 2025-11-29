@class NSData, BaseResponse;

@interface VoipILinkCommonResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *body;

+ (void)initialize;

@end
