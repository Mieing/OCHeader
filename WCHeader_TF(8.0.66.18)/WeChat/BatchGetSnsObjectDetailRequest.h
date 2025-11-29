@class BaseRequest, NSMutableArray, SKBuiltinBuffer_t;

@interface BatchGetSnsObjectDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *feedIdList;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;

+ (void)initialize;

@end
