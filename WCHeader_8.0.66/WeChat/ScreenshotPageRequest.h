@class BaseRequest, NSString, BaseEvent, NSMutableArray;

@interface ScreenshotPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) BaseEvent *baseEvent;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSMutableArray *transactionIds;
@property (nonatomic) int errorCode;

+ (void)initialize;

@end
