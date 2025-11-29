@class BaseRequest, NSData;

@interface TextRewriteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *originText;

+ (void)initialize;

@end
