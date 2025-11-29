@class NSData, NSString;

@interface WxaRealTimeReportInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSData *content;
@property (retain, nonatomic) NSString *appid;

+ (void)initialize;

@end
