@class CContact, NSString, NSMutableArray, MMTableView;
@protocol MMLiveMsgTipsExpandViewDelegate;

@interface MMLiveMsgTipsExpandView : MMMsgTipsExpandView <UITableViewDelegate, UITableViewDataSource, MMLiveMgrExt, MMLiveTaskMgrExt, MMLiveMsgTipsExpandViewCellDelegate>

@property (retain, nonatomic) CContact *groupContact;
@property (retain, nonatomic) NSMutableArray *viewModelList;
@property (retain, nonatomic) MMTableView *bannerItemTableView;
@property (weak, nonatomic) id<MMLiveMsgTipsExpandViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)layoutSubviews;
- (void)initViews;
- (void)layoutUI;
- (void)setupData;
- (void)reloadData;
- (void)updateWithContact:(id)a0;
- (void)fetchLiveInfoIfNeed;
- (unsigned long long)maxDisplayCellCount;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)onMMLiveMsgTipsExpandViewCellCloseLive:(id)a0;
- (void)onLiveCountChanged:(id)a0;
- (void)onExitLiveSuccessWithLiveTaskId:(id)a0;
- (void)onExtendAnimationDidEndWithLiveTask:(id)a0;
- (void).cxx_destruct;

@end
