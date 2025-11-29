@class NSString, MMFinderLivePaidConnectMicAudienceOperationInfo, MMTableView;
@protocol MMFinderLivePaidConnectMicAudienceOperationPanelDelegate;

@interface MMFinderLivePaidConnectMicAudienceOperationPanel : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, WCLiveActionSheetDelegate>

@property (retain, nonatomic) MMFinderLivePaidConnectMicAudienceOperationInfo *info;
@property (retain, nonatomic) MMTableView *tableView;
@property (weak, nonatomic) id<MMFinderLivePaidConnectMicAudienceOperationPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateWithInfo:(id)a0;
- (void)initViews;
- (void)setupPageSheetConfig;
- (double)getPageSheetContentHeight;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onClose;
- (void)onCancelApply;
- (void)onSelectBid;
- (void)showConfirmCancelSheet;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
