@class NSMutableArray, BaseResponse;

@interface GetAppInfoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int count;
@property (retain, nonatomic) NSMutableArray *appInfoList;

+ (void)initialize;

@end
