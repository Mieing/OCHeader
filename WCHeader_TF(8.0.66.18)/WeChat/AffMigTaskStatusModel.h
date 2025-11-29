@class NSString;

@interface AffMigTaskStatusModel : WXPBGeneratedMessage

@property (nonatomic) int status;
@property (retain, nonatomic) NSString *statusExtra;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL hasVirtualLogin;

+ (void)initialize;

@end
