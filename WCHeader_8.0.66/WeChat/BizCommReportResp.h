@class NSString, BaseResponse;

@interface BizCommReportResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errmsg;
@property (retain, nonatomic) NSString *respJson;

+ (void)initialize;

@end
