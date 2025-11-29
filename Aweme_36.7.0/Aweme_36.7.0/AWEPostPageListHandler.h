@class AWEPostPageListDataSource, AWEPostPageElementCenter, AWEPostPageListBatchUpdatesCombiner, NSMutableSet, AWEPostPageTableView, NSString;
@protocol AWEPostPageListDataTemplate, AWEPostPageContext;

@interface AWEPostPageListHandler : NSObject <AWEPostPageElementUpdateListener, AWEPostPageListService>

@property (retain, nonatomic) id<AWEPostPageContext> context;
@property (weak, nonatomic) AWEPostPageElementCenter *elementCenter;
@property (retain, nonatomic) AWEPostPageListDataSource *dataSource;
@property (retain, nonatomic) NSMutableSet *cellIdentifiers;
@property (retain, nonatomic) NSMutableSet *headerFooterIdentifiers;
@property (nonatomic) BOOL isInUpdateTransaction;
@property (copy, nonatomic) id /* block */ bactchUpdatesBlock;
@property (retain, nonatomic) id<AWEPostPageListDataTemplate> template;
@property (nonatomic) BOOL isDataLoaded;
@property (retain, nonatomic) AWEPostPageListBatchUpdatesCombiner *combiner;
@property (weak, nonatomic) AWEPostPageTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *didSelectElementType;
@property (nonatomic) long long didSelectRowSignal;

- (void)bindServices:(id)a0;
- (void)performRowHeightUpdates:(id /* block */)a0;
- (id)cellForElementType:(id)a0;
- (id)indexPathForElementType:(id)a0;
- (id)elementForElementType:(id)a0;
- (void)reloadElementType:(id)a0;
- (void)batchUpdateWithElementTypes:(id)a0;
- (void)batchUpdate:(id)a0;
- (void)reloadAllListData;
- (void)performRowHeightUpdatesWithAnimation:(id /* block */)a0;
- (void)center:(id)a0 didRegisterElements:(id)a1;
- (void)buildListData;
- (void)p_clearBackgroundColorForHeaderFooterView:(id)a0;
- (void)p_batchUpdateIfNeeded;
- (void)p_updateUIWithDiff:(id)a0;
- (void)p_applyBatchData:(id)a0;
- (id)initWithListTemplate:(id)a0;
- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)a0;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)sections;
- (void)didSelectRowAtIndexPath:(id)a0;
- (double)heightForHeaderInSection:(long long)a0;
- (double)heightForFooterInSection:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;
- (id)viewForFooterInSection:(long long)a0;
- (id)elementAtIndexPath:(id)a0;

@end
