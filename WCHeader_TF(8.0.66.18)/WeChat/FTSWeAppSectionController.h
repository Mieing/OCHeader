@class NSArray, NSString;

@interface FTSWeAppSectionController : FTSBaseSectionController <IWALocalSearchExt>

@property (retain, nonatomic) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateWithModel:(id)a0;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onWASearchResultChangedForDetail;
- (void).cxx_destruct;

@end
