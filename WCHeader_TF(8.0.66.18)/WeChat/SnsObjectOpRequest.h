@class BaseRequest, NSMutableArray, SKBuiltinBuffer_t;

@interface SnsObjectOpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCount;
@property (retain, nonatomic) NSMutableArray *opList;
@property (retain, nonatomic) SKBuiltinBuffer_t *extSpamInfo;

+ (void)initialize;

@end
