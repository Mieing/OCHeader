@class BaseRequest, NSString, NSMutableArray;

@interface MMBizRecvTmpMsgOptionSetRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *bizUsername;
@property (retain, nonatomic) NSMutableArray *operation;

+ (void)initialize;

@end
