@class MMTableView, MMFinderLiveFansGroupMemberSectionInfo, NSString, MMLiveTaskId, MMFinderLiveFansGroupMemberTableSectionHeaderView;
@protocol MMFinderLiveFansGroupMemberTableViewDelegate;

@interface MMFinderLiveFansGroupMemberTableViewModel : NSObject <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMFinderLiveFansGroupMemberSectionInfo *fansGroupMemberSectionInfo;
@property (retain, nonatomic) MMFinderLiveFansGroupMemberTableSectionHeaderView *memberSectionHeaderView;
@property (nonatomic) unsigned long long memberType;
@property (nonatomic) unsigned long long groupType;
@property (weak, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveFansGroupMemberTableViewDelegate> tableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableView:(id)a0;
- (void)updateFansGroupMemberSectionInfo:(id)a0;
- (void)updateFansGroupMemberSectionInfo:(id)a0 memberType:(unsigned long long)a1 groupType:(unsigned long long)a2;
- (id)getTableHeaderView;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)allFansMemberTitle;
- (id)superfanMemberTitle;
- (id)getMemberTitleForAnchor;
- (id)getWarmTitleForAnchor;
- (void)openMemberTypeActionSheet;
- (void)openGroupTypeActionSheet;
- (void).cxx_destruct;

@end
