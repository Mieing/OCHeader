@class NSString;

@interface WxVerifyCodeReqInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *verifySignature;
@property (retain, nonatomic) NSString *verifyContent;

+ (void)initialize;

@end
