@class NSString, BaseResponse;

@interface GenMallPrepayResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *appSource;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;

+ (void)initialize;

@end
