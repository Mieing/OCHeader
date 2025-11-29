@class NSArray, NSString;

@interface FTSFavSectionController : FTSBaseSectionController <IFTSFavMgrExt>

@property (retain, nonatomic) NSArray *favItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
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
- (void)selectFavSearchItem:(id)a0 index:(unsigned int)a1;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)cancelSearch;
- (void)onFTSDetailPageFavResultChanged;
- (void).cxx_destruct;

@end
