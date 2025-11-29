@class BaseRequest, NSString, MMBizWxaAppBaseInfo;

@interface ReportWxaAppExposeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMBizWxaAppBaseInfo *wxaAppBaseInfo;
@property (retain, nonatomic) NSString *jsonData;

+ (void)initialize;

@end
