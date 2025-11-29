@class NSString;

@interface NewLifeOpenWeSeePageReq : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) NSString *reportContent;

+ (void)initialize;

@end
