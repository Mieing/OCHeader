@class NSMutableArray, AffMigTimeRange;

@interface AffEmigrationCfgModel : WXPBGeneratedMessage

@property (nonatomic) BOOL isAll;
@property (retain, nonatomic) AffMigTimeRange *timeRange;
@property (retain, nonatomic) NSMutableArray *convList;
@property (nonatomic) BOOL excludeMedia;

+ (void)initialize;

@end
