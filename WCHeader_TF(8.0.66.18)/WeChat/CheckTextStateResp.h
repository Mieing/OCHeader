@class StatusFooter, NSString, BaseResponse;

@interface CheckTextStateResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) StatusFooter *statusFooter;
@property (retain, nonatomic) NSString *footerVerifyInfoBase64;

+ (void)initialize;

@end
