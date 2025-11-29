@class BaseRequest, NSMutableArray;

@interface BatchSwitchServiceNotifyOptionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *operationList;

+ (void)initialize;

@end
