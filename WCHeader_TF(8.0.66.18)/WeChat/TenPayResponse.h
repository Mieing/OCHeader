@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface TenPayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *retText;
@property (nonatomic) int platRet;
@property (retain, nonatomic) NSString *platMsg;
@property (nonatomic) int cgiCmdid;
@property (nonatomic) int tenpayErrType;
@property (retain, nonatomic) NSString *tenpayErrMsg;

+ (void)initialize;

@end
