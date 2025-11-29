@class NSMutableArray, NSMutableDictionary;

@interface AmoebaPageConfig : NSObject {
    NSMutableArray *m_filterPages;
    NSMutableArray *m_mainPages;
    NSMutableArray *m_splashPages;
    NSMutableDictionary *m_pageConfigModels;
    NSMutableDictionary *m_needReplenishPages;
}

+ (id)shareInstance;

- (id)init;
- (void)onAccountInit;
- (void)onAccountClearData;
- (void)parseReplenishConfig;
- (void)parseFilterConfig;
- (void)parseLocalConfig;
- (void)parseCloudConfig;
- (void)pullCloudConfig;
- (id)getFilterPages;
- (void)setFilterPages:(id)a0;
- (BOOL)isFilterPage:(id)a0;
- (void)setPageConfigs:(id)a0;
- (id)getPageConfigModel:(id)a0;
- (id)getMainPages;
- (void)setMainPages:(id)a0;
- (BOOL)isMainPage:(id)a0;
- (id)getSplashPages;
- (void)setSplashPages:(id)a0;
- (BOOL)isSplashPage:(id)a0;
- (BOOL)isNeedReplenishPage:(id)a0 withCurPage:(id)a1;
- (BOOL)isFinderOrNearbyTabSubPages:(id)a0;
- (id)arrayForKey:(id)a0 dic:(id)a1;
- (id)dictionaryAtIndex:(unsigned long long)a0 array:(id)a1;
- (long long)int64ForKey:(id)a0 dic:(id)a1;
- (id)stringAtIndex:(unsigned long long)a0 array:(id)a1;
- (void).cxx_destruct;

@end
