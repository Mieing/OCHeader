@class NSArray, NSString;

@interface FTSSingleContactSectionController : FTSBaseSectionController <IFTSContactMgrExt, FTSFirstTitleCellDelegate, FTSDataChangeBroadCast>

@property (retain, nonatomic) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didUpdateWithModel:(id)a0;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (void)didSelectDataRowAtIndex:(long long)a0 indexPath:(id)a1;
- (id)cellForTitleInSection:(long long)a0;
- (long long)numberOfSearchItems;
- (void)didSelectRowAtIndex:(long long)a0;
- (id)sectionTitle;
- (id)noResultTipSuffix;
- (id)searchBarPlaceHolder;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (void)cancelSearch;
- (void)onFTSContactSearchFinish:(id)a0;
- (void)onRightButtonTapped;
- (void)onContactsModified;
- (void).cxx_destruct;

@end
