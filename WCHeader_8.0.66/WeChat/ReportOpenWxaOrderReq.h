@class BaseRequest;

@interface ReportOpenWxaOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) BOOL destroyRedSpots;

+ (void)initialize;

@end
