@class NSData, BaseResponse;

@interface TextRewriteResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *originText;
@property (retain, nonatomic) NSData *rewriteText;

+ (void)initialize;

@end
