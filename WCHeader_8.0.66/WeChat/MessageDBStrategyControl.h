@class NSMutableArray;

@interface MessageDBStrategyControl : WXPBGeneratedMessage

@property (nonatomic) BOOL enableCleanStrategy;
@property (nonatomic) unsigned int checkIntervalDays;
@property (retain, nonatomic) NSMutableArray *strategyItems;

+ (void)initialize;

- (void)setStrategyItems:(id)a0;
- (id)strategyItems;
- (void)setCheckIntervalDays:(unsigned int)a0;
- (unsigned int)checkIntervalDays;
- (void)setEnableCleanStrategy:(BOOL)a0;
- (BOOL)enableCleanStrategy;

@end
