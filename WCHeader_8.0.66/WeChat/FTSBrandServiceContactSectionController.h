@class NSArray, NSString;

@interface FTSBrandServiceContactSectionController : FTSBaseSectionController <IFTSContactMgrExt>

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
- (void)onFTSContactSearchFinish:(id)a0;
- (void).cxx_destruct;

@end
