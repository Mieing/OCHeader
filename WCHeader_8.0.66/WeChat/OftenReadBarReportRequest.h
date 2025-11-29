@class BaseRequest, NSMutableArray;

@interface OftenReadBarReportRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reportType;
@property (nonatomic) unsigned int sessionid;
@property (retain, nonatomic) NSMutableArray *showList;
@property (retain, nonatomic) NSMutableArray *clickList;
@property (nonatomic) unsigned int source;

+ (void)initialize;

@end
