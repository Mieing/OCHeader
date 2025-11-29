@class BaseRequest, NSString;

@interface CancelPayRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int payScene;
@property (nonatomic) int payChannel;
@property (retain, nonatomic) NSString *reqKey;

+ (void)initialize;

@end
