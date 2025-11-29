@class NSData, BaseResponse;

@interface ILinkCloudAppAuthResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *clientAuthResp;

+ (void)initialize;

@end
