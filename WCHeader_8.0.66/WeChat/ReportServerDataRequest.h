@class BaseRequest, NSMutableArray;

@interface ReportServerDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *dataList;

+ (void)initialize;

@end
