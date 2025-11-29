@class MMCPLabel, MMLiveHalfScreenTitleBarView, NSString, MMFinderLiveTaskId, MMUIView, MMTableView;
@protocol MMLiveRewardGiftAttackContactSelectionLogicDelegate;

@interface MMLiveRewardGiftAttackContactSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMLiveHalfScreenTitleBarView *titleBarView;
@property (retain, nonatomic) MMCPLabel *titleLabel;
@property (retain, nonatomic) MMUIView *titleSeperatorLiveView;
@property (retain, nonatomic) MMUIView *contentView;
@property (readonly, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMTableView *contactTableView;
@property (weak, nonatomic) id<MMLiveRewardGiftAttackContactSelectionLogicDelegate> logicDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)initView;
- (void)reloadData;
- (void)setExtraCellLineHidden:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetDidDisappear;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (id)liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
