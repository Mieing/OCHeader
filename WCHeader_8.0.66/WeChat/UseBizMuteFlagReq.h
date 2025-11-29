@class BaseRequest, NSMutableArray;

@interface UseBizMuteFlagReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *notifyAccounts;

+ (void)initialize;

@end
