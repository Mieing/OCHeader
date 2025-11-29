@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface GetHDHeadImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) SKBuiltinBuffer_t *data;

+ (void)initialize;

@end
