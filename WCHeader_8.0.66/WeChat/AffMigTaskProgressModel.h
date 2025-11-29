@interface AffMigTaskProgressModel : WXPBGeneratedMessage

@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) float speed;
@property (nonatomic) unsigned long long remainingSecond;
@property (nonatomic) unsigned long long totalConvCount;
@property (nonatomic) unsigned long long transferredConvCount;

+ (void)initialize;

@end
