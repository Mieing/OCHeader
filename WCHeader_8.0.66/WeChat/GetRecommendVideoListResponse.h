@class NSString, NSMutableArray, BaseResponse;

@interface GetRecommendVideoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsonData;
@property (retain, nonatomic) NSMutableArray *videoList;

+ (void)initialize;

@end
