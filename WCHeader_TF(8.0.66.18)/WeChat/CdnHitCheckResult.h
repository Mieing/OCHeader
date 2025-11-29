@class NSMutableArray;

@interface CdnHitCheckResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *hit;
@property (retain, nonatomic) NSMutableArray *nohit;

+ (void)initialize;

@end
