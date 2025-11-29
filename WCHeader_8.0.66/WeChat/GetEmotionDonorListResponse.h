@class SKBuiltinBuffer_t, NSMutableArray, BaseResponse;

@interface GetEmotionDonorListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int donorNum;
@property (retain, nonatomic) NSMutableArray *donors;
@property (retain, nonatomic) SKBuiltinBuffer_t *respBuf;

+ (void)initialize;

@end
