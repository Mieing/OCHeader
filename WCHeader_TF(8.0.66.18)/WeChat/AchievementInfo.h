@class NSMutableArray;

@interface AchievementInfo : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSMutableArray *gameAchievements;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setGameAchievements:(id)a0;
- (id)gameAchievements;
- (id)archivedWCTValue;

@end
