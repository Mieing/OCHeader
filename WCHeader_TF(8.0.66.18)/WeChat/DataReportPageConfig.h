@class NSString, NSMutableDictionary, NSMutableArray;

@interface DataReportPageConfig : MMUserService <MMServiceProtocol> {
    NSMutableDictionary *m_pageConfigModels;
    NSMutableArray *m_filterPages;
    NSMutableDictionary *m_needReplenishPages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getPageConfigModel:(id)a0;
- (void)parseReplenishConfig;
- (void)parseFilterConfig;
- (void)parseLocalConfig;
- (void)parseCloudConfig;
- (void)pullCloudConfig;
- (BOOL)isFilterPage:(id)a0;
- (BOOL)isNeedReplenishPage:(id)a0 withCurPage:(id)a1;
- (BOOL)isFinderOrNearbyTabSubPages:(id)a0;
- (void).cxx_destruct;

@end
