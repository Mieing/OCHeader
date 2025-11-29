@class BaseRequest, NSMutableArray;

@interface BatchGetUrlInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int batchCount;
@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
