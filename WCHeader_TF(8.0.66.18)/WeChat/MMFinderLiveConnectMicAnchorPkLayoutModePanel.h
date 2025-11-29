@class MMFinderLiveConnectMicModePreviewView, NSString, MMFinderLiveTaskId, UITableView;
@protocol MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate;

@interface MMFinderLiveConnectMicAnchorPkLayoutModePanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long originalMode;
@property (nonatomic) unsigned long long selectedMode;
@property (nonatomic) unsigned long long micLayoutMode;
@property (retain, nonatomic) MMFinderLiveConnectMicModePreviewView *previewView;
@property (retain, nonatomic) UITableView *modeSettingTableView;
@property (nonatomic) BOOL modeChanged;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 mode:(unsigned long long)a1;
- (void)setupPageSheetConfig;
- (id)createRightButton;
- (id)dequeueGenericCell;
- (void)updateTableSelection;
- (void)updatePreviewViewWithMicUsersInfo:(id)a0;
- (id)liveTask;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)dealloc;
- (void)onConfirmed;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onLiveTask:(id)a0 micUsersInfoChanged:(id)a1;
- (void).cxx_destruct;

@end
