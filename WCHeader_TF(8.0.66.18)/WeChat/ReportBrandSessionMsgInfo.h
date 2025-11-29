@class NSString;

@interface ReportBrandSessionMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned long long mid;
@property (nonatomic) unsigned int idx;
@property (nonatomic) BOOL top;
@property (nonatomic) BOOL click;
@property (nonatomic) unsigned int ts;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL redDot;

+ (void)initialize;

@end
