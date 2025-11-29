@class NSArray, NSString;

@interface FTSWeShopSectionController : FTSBaseSectionController <IFTSWeShopExt> {
    NSString *_searchQuery;
    BOOL hasFirstWeshopBuffer;
}

@property (retain, nonatomic) NSArray *modelContainers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didUpdateWithModel:(id)a0;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectRowAtIndex:(long long)a0;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (void)willDisplayCell:(id)a0 forRowAtIndex:(long long)a1;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)fillCommonClickReportStat:(id)a0 matchTip:(id)a1;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSWeShopDetailSearchResultChanged:(id)a0;
- (unsigned long long)clickTypeForIndex:(long long)a0;
- (void).cxx_destruct;

@end
