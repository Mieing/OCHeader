@class NSArray, NSString;

@interface FTSFeatureSectionController : FTSBaseSectionController <IFTSMemorySearchMgrExt>

@property (retain, nonatomic) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateWithModel:(id)a0;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (id)countLimitConifg;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSMemorySearchResultChangedForFeatureDetailPage;
- (void).cxx_destruct;

@end
