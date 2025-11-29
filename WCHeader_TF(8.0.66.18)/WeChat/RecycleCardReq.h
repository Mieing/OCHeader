@class BaseRequest, NSMutableArray;

@interface RecycleCardReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
