@interface AWENearbyBTMManager : NSObject

+ (id)areaBtmStringWith:(long long)a0 tabId:(long long)a1;
+ (id)itemBtmStringWith:(long long)a0;
+ (id)btmPageABStringWithPageType:(long long)a0;
+ (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1 subTabId:(long long)a2 index:(long long)a3;
+ (id)itemBtmStringWith:(long long)a0 index:(long long)a1;
+ (id)btmFeedCStringWithGrouponSubTabId:(long long)a0;
+ (id)btmToolMorePanelItemCStringWithIndex:(long long)a0;
+ (id)btmPageStringWithPageType:(long long)a0 cdStringWithAreaType:(long long)a1 itemType:(long long)a2 subTabId:(long long)a3;
+ (id)btmPageStringWithPageType:(long long)a0 areaType:(long long)a1 subTabId:(long long)a2 dString:(id)a3;
+ (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1;
+ (id)btmCdStringWithAreaType:(long long)a0 subTabId:(long long)a1 dString:(id)a2;
+ (id)btmCdStringWithAreaType:(long long)a0 itemType:(long long)a1 index:(long long)a2;
+ (id)btmPageStringWithPageType:(long long)a0;

@end
