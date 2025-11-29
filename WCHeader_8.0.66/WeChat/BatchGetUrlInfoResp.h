@class NSMutableArray, BaseResponse;

@interface BatchGetUrlInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int batchCount;
@property (retain, nonatomic) NSMutableArray *itemList;

+ (void)initialize;

@end
