@class NSMutableArray, BaseResponse;

@interface BatchSyncVersionResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respInfoList;

+ (void)initialize;

@end
