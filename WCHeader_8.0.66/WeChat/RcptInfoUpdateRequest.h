@class BaseRequest, RcptInfoNode;

@interface RcptInfoUpdateRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) RcptInfoNode *rcptinfo;

+ (void)initialize;

@end
