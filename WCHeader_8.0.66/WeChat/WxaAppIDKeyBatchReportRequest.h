@class BaseRequest, NSMutableArray, ReportDeviceInfo;

@interface WxaAppIDKeyBatchReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *recordList;
@property (retain, nonatomic) ReportDeviceInfo *reportDeviceInfo;

+ (void)initialize;

@end
