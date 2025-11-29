@class BaseResponse;

@interface ReportWxaAppExposeResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int recordId;

+ (void)initialize;

@end
