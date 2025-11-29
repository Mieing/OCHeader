@class SKBuiltinBuffer_t, NSMutableArray, BaseResponse;

@interface BatchGetSnsObjectDetailResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) BOOL serverReject;
@property (retain, nonatomic) SKBuiltinBuffer_t *wssessionBuf;

+ (void)initialize;

@end
