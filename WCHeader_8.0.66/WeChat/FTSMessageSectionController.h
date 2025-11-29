@class NSString, NSMutableDictionary;

@interface FTSMessageSectionController : FTSBaseSectionController <IFTSMessageMgrExt> {
    NSMutableDictionary *m_dicWeakMedia;
    NSMutableDictionary *m_dicIndexItemCount;
    BOOL isTalkerEntry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)didUpdateWithModel:(id)a0;
- (id)sectionTitle;
- (unsigned long long)sectionType;
- (id)countLimitConifg;
- (id)dataCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (id)talkerCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (id)msgCellForItemAtIndex:(long long)a0 indexPath:(id)a1;
- (long long)numberOfSearchItems;
- (void)didSelectRowAtIndex:(long long)a0;
- (id)objectForIndexPath:(id)a0;
- (double)heightForRowAtIndex:(long long)a0;
- (void)search:(id)a0;
- (BOOL)hasSearchDone;
- (BOOL)isSearching;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)cancelSearch;
- (void)onFTSDetailPageMessageResultChanged:(BOOL)a0;
- (unsigned long long)clickTypeForIndex:(long long)a0;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)a0 index:(unsigned int)a1;
- (void).cxx_destruct;

@end
