@class BaseRequest, NSString;

@interface ModEmotionPackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int opCode;

+ (void)initialize;

@end
