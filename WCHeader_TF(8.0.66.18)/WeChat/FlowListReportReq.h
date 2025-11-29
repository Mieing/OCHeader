@class BaseRequest, NSMutableArray;

@interface FlowListReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reportList;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sessionid;

+ (void)initialize;

@end
