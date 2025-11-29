@class NSString, BaseResponse;

@interface ReportHBResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;

+ (void)initialize;

@end
