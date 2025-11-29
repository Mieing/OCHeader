@class NSArray;

@interface FTSGroupContactSectionController : FTSBaseSectionController

@property (retain, nonatomic) NSArray *contacts;

- (void)didUpdateWithModel:(id)a0;
- (id)sectionTitle;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (unsigned long long)sectionType;
- (long long)numberOfSearchItems;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (id)countLimitConifg;
- (BOOL)shouldDisplayChatRoomEntry;
- (BOOL)isCreateChatRoomCellAtRow:(long long)a0;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSContactSearchFinish:(id)a0;
- (unsigned long long)clickTypeForIndex:(long long)a0;
- (void).cxx_destruct;

@end
