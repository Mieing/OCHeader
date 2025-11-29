@interface AWEIMStreakPetElfWidgetFrequencyExitManager : NSObject

+ (void)markDismissWithoutClick;
+ (void)markShow;
+ (BOOL)canShowByFrequencyLimitForConversationId:(id)a0;
+ (BOOL)hitDynamicWebpExp;
+ (void)updateCurrentDateToDateArrayWithStorageKey:(id)a0;
+ (id)getDateArrayWithStorageKey:(id)a0;
+ (void)storeDateArray:(id)a0 storageKey:(id)a1;
+ (id)getUidStorageKeyWithKey:(id)a0;

@end
