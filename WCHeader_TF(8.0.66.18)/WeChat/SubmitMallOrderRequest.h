@class BaseRequest, NSString, Snapshot;

@interface SubmitMallOrderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) Snapshot *snapshot;
@property (retain, nonatomic) NSString *payAppid;
@property (nonatomic) unsigned int fromScene;

+ (void)initialize;

@end
