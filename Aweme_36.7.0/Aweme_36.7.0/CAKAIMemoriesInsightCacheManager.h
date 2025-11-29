@interface CAKAIMemoriesInsightCacheManager : NSObject

+ (id)sharedInstance;

- (void)saveInsightSections:(id)a0;
- (id)lastCacheDateKey;
- (id)lastCacheSectionKey;
- (id)lastScoreMapDateKey;
- (id)lastCacheScoreMapKey;
- (id)insightSectionsForToday;
- (void)saveScoreMapForToday:(id)a0;
- (id)scoreMapForToday;

@end
