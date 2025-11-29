@class NSMutableArray, BaseResponse;

@interface KFGetBindListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *workerInfoList;

+ (void)initialize;

@end
