@class BaseRequest, NSString;

@interface GetEmotionDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int scene;
@property (nonatomic) int version;

+ (void)initialize;

@end
