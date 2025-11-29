@class NSString, UITableView;
@protocol MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate;

@interface MMFinderLiveConnectMicIncomingAudienceSettingsPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicConditionChooseDelegate, MMFinderLiveConnectMicSelectConnectModeDelegate>

@property (nonatomic) unsigned long long curConditionType;
@property (nonatomic) BOOL canAutoConnect;
@property (nonatomic) unsigned long long bannedConditionFlag;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MMFinderLiveConnectMicIncomingAudienceSettingsPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCurrentCondition:(unsigned long long)a0 autoConnect:(BOOL)a1 bannedConditionsFlag:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)a0;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(BOOL)a0;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)initializeComponents;
- (id)getConditionTitleByType:(unsigned long long)a0;
- (void)showMicConditionChoosePanel;
- (void)showSelectConnectModePanel;
- (void).cxx_destruct;

@end
