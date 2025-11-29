@class NSArray, NSString;

@interface FTSMinimizeTaskSectionController : FTSBaseSectionController <IFTSMinimizeTaskLocalSearchExt>

@property (retain, nonatomic) NSArray *arrTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdateWithModel:(id)a0;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (double)heightForRowAtIndex:(long long)a0;
- (id)sectionTitle;
- (id)searchBarPlaceHolder;
- (id)noResultTipSuffix;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)selectSearchItem:(id)a0 index:(unsigned int)a1;
- (void)onFTSMinimizeTaskSearchResultChangedForDetail;
- (void).cxx_destruct;

@end
