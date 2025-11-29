@class BaseRequest, NSMutableArray;

@interface GetUpdatableMsgInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *shareKeyList;

+ (void)initialize;

@end
