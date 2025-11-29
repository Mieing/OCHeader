@class NSMutableArray, BaseResponse;

@interface KFGetDefaultListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *workerInfoList;

+ (void)initialize;

@end
