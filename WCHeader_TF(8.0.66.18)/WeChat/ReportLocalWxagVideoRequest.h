@class BaseRequest, NSMutableArray;

@interface ReportLocalWxagVideoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int op;
@property (retain, nonatomic) NSMutableArray *videoList;

+ (void)initialize;

@end
