@interface AFDMomentRingItemsFilterHelper : NSObject

+ (BOOL)isNotesBubbleExpired:(id)a0;
+ (id)getNotExpiredItemsOfModel:(id)a0;
+ (BOOL)isCommonItemExpired:(id)a0;
+ (void)trackFindExpiredItem;
+ (long long)notesBubbleExpiredTime;
+ (long long)colorRingItemExpiredTime;
+ (id)filterExpiredItemsOfModel:(id)a0;
+ (BOOL)isNotesItems:(id)a0;

@end
