@class BaseRequest, NSMutableArray, NSString;

@interface AppMsgReportReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reportList;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) NSString *netType;

+ (void)initialize;

@end
