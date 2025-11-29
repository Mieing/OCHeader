@class LensInfo, BaseResponse;

@interface GetLensInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) LensInfo *lens;

+ (void)initialize;

@end
