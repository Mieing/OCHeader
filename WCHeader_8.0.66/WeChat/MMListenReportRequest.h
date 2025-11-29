@class BaseRequest, NSMutableArray, NSData;

@interface MMListenReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSData *appCtx;
@property (nonatomic) int useNewReport;

+ (void)initialize;

@end
