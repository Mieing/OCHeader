@class NSMutableArray, BaseResponse;

@interface GetEncashPrepareInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
