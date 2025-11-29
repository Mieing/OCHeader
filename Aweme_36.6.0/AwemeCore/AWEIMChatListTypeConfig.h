@interface AWEIMChatListTypeConfig : NSObject

+ (BOOL)currentIsCommonChatListWrapperType:(long long)a0;
+ (BOOL)currentIsCommonChatListEntranceType:(long long)a0;
+ (long long)initCurrentMessageListTypeWithMessageTabType:(unsigned long long)a0;
+ (long long)initCurrentListTabWrapperTypeWithMessageTabType:(unsigned long long)a0;
+ (BOOL)enableLoadMoreForCurrentEntranceType:(long long)a0;
+ (BOOL)enableShowDefaultEmptyPageForCurrentEntranceType:(long long)a0;
+ (BOOL)enableShowRecommendForCurrentEntranceType:(long long)a0;
+ (BOOL)enableShowRecommendSectionForCurrentEntranceType:(long long)a0;
+ (BOOL)enableLongPresssForCurrentEntranceType:(long long)a0;
+ (BOOL)enableLongPresssToEnterChatForCurrentEntranceType:(long long)a0;
+ (BOOL)isCouldCellSwipInTabEntryType:(long long)a0;
+ (BOOL)enablePreferDarkThemeForCurrentEntranceType:(long long)a0;

@end
