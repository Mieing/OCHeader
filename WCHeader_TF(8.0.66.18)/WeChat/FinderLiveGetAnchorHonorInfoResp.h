@class NSMutableArray, BaseResponse;

@interface FinderLiveGetAnchorHonorInfoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *honorInfos;

+ (void)initialize;

@end
