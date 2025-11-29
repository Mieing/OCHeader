@class MMFinderLiveConnectMicAnchorContainerReporterExtInfo, NSString, MMFinderLiveTaskId, UIView, MMTableView;
@protocol MMFinderLiveConnectMicAnchorMicModeSettingsPanelDelegate;

@interface MMFinderLiveConnectMicAnchorMicModeSettingsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long originalCondition;
@property (nonatomic) unsigned long long targetCondition;
@property (retain, nonatomic) MMFinderLiveConnectMicAnchorContainerReporterExtInfo *anchorContainerReporterExtInfo;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAnchorMicModeSettingsPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)updateAnchorContainerReporterExtInfo:(id)a0;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (id)createLeftButton;
- (id)createRightButton;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)contentViewHeight;
- (double)getTableHeight;
- (id)liveTask;
- (void)doneButtonAction;
- (void)cancelButtonAction;
- (void).cxx_destruct;

@end
