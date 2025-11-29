@class AWEProfileServiceComponentToolBarView;

@interface AWEProfileExtensionModuleEditOldTableViewConfig : AWEProfileExtensionModuleEditBasicTableViewConfig

@property (retain, nonatomic) AWEProfileServiceComponentToolBarView *toolBarView;

- (long long)numberOfSectionsInTableView:(id)a0 cardLists:(id)a1;
- (long long)numberOfRowsInSection:(long long)a0 cardLists:(id)a1;
- (double)heightForRowAtIndexPath:(id)a0 cardLists:(id)a1;
- (id)cellForRowAtIndexPath:(id)a0 cardLists:(id)a1;
- (double)heightForFooterInSection:(long long)a0 cardLists:(id)a1;
- (id)viewForFooterInSection:(long long)a0 cardLists:(id)a1;
- (BOOL)canMoveRowAtIndexPath:(id)a0 cardLists:(id)a1;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)a0 toProposedIndexPath:(id)a1 cardLists:(id)a2;
- (long long)editingStyleForRowAtIndexPath:(id)a0 cardLists:(id)a1;
- (BOOL)canEditRowAtIndexPath:(id)a0 cardLists:(id)a1;
- (void).cxx_destruct;
- (double)heightForHeaderInSection:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;

@end
