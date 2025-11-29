@class BaseRequest, RcptInfoNode;

@interface RcptInfoAddRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) RcptInfoNode *rcptinfo;

+ (void)initialize;

@end
