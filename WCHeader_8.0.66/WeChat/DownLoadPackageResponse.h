@class SKBuiltinBuffer_t, BaseResponse;

@interface DownLoadPackageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *packageBuf;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int totalSize;

+ (void)initialize;

@end
