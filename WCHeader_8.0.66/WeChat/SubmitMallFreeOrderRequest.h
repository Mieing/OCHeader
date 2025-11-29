@class BaseRequest, Snapshot;

@interface SubmitMallFreeOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) Snapshot *snapshot;

+ (void)initialize;

@end
