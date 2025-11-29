@class MMFinderLiveAnchorPromoteInfo, NSString, NSMutableArray, MMTableView;
@protocol MMFinderLivePromoteTableViewDelegate;

@interface MMFinderLivePromoteTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *promoteList;
@property (retain, nonatomic) MMFinderLiveAnchorPromoteInfo *lastSendedPromoteInfo;
@property (retain, nonatomic) NSString *errorStr;
@property (weak, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MMFinderLivePromoteTableViewDelegate> operationDelegate;
@property (nonatomic) BOOL enablePushPromote;
@property (nonatomic) BOOL isLiving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updatePromoteInfoList:(id)a0;
- (unsigned long long)getPromoteItemCount;
- (BOOL)isContainPromoteItem:(id)a0;
- (BOOL)isContainPromoteItemWithType:(unsigned int)a0;
- (void)addPrmoteItem:(id)a0;
- (void)insertPrmoteItem:(id)a0;
- (void)updatePromoteItem:(id)a0;
- (void)deletePromoteItem:(id)a0;
- (BOOL)isPromoting;
- (id)promoteInfoItemsOfType:(unsigned int)a0;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)a0;
- (void)registerReusableCellTypesForTableView:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)canShowTipFooterInSection:(long long)a0;
- (id)getLiveAnchorPromoteInfo:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)updateSendedPromoteInfo;
- (void).cxx_destruct;

@end
