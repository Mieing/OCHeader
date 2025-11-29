@class BaseRequest, NSMutableArray;

@interface SetUserSwitchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *appSwitchFlagList;

+ (void)initialize;

@end
