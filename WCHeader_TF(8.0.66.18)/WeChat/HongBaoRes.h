@class NSString, SKBuiltinBuffer_t, BaseResponse;

@interface HongBaoRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *retText;
@property (nonatomic) int platRet;
@property (retain, nonatomic) NSString *platMsg;
@property (nonatomic) int cgiCmdid;
@property (nonatomic) int errorType;
@property (retain, nonatomic) NSString *errorMsg;

+ (void)initialize;

@end
