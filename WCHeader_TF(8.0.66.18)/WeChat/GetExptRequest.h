@class BaseRequest, NSMutableArray;

@interface GetExptRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lastGetSvrSecond;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *localExptList;

+ (void)initialize;

@end
