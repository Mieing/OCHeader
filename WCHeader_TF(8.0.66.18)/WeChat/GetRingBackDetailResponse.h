@class NSMutableArray, BaseResponse;

@interface GetRingBackDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
