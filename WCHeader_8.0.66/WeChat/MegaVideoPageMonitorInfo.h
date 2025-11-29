@class NSString;

@interface MegaVideoPageMonitorInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) int action;
@property (nonatomic) long long pageId;
@property (nonatomic) int pageType;
@property (nonatomic) int enterType;
@property (nonatomic) int actionCost;
@property (nonatomic) int actionResult;
@property (retain, nonatomic) NSString *feedId;
@property (retain, nonatomic) NSString *extra;

+ (void)initialize;

@end
