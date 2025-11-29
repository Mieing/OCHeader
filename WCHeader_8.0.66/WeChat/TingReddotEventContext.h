@class TingReddotReportInfo, NSData, NSString;

@interface TingReddotEventContext : WXPBGeneratedMessage

@property (retain, nonatomic) TingReddotReportInfo *reddotInfo;
@property (retain, nonatomic) NSData *ctrlInfoBuffer;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

@end
