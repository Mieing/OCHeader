@class BaseRequest, NSMutableArray, NSString;

@interface SnsGenAiImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *url;
@property (retain, nonatomic) NSString *clientId;

+ (void)initialize;

@end
