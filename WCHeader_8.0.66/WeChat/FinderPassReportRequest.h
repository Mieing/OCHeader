@class BaseRequest, NSString;

@interface FinderPassReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int scene;
@property (retain, nonatomic) NSString *reportData;

+ (void)initialize;

@end
