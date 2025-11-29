@class SKBuiltinBuffer_t, BaseResponse;

@interface ShakeImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int imgId;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *buffer;

+ (void)initialize;

@end
