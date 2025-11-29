@class NSString, BaseResponse;

@interface PayIBGGenPrepayResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *prepayId;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *appSource;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsInjectCode;

+ (void)initialize;

@end
