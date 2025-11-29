@class NSString, BaseResponse;

@interface ReportLocalWxagVideoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsonData;

+ (void)initialize;

@end
