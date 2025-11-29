@class BaseRequest, NSString;

@interface SnsCancelGenAiImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *taskId;

+ (void)initialize;

@end
