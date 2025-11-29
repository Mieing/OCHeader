@class NSMutableArray, BaseResponse;

@interface GetV6StrangerResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
