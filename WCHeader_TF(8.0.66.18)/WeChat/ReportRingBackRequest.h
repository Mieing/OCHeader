@class BaseRequest, NSMutableArray;

@interface ReportRingBackRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reportType;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
