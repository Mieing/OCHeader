@class SKBuiltinBuffer_t, BaseResponse;

@interface ShakeReportResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;
@property (nonatomic) int ret;
@property (nonatomic) unsigned int imgId;
@property (nonatomic) unsigned int imgTotoalLen;

+ (void)initialize;

@end
