@class NSMutableArray, BaseResponse;

@interface KFGetInfoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *workerInfoList;

+ (void)initialize;

@end
