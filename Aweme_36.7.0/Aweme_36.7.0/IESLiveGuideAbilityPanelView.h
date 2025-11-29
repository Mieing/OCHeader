@class HTSLiveText, NSString, CreateInfoResponse_ConfigItem, NSMutableSet, NSMutableArray, UITableView;

@interface IESLiveGuideAbilityPanelView : UIView <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate>

@property (retain, nonatomic) CreateInfoResponse_ConfigItem *configItem;
@property (retain, nonatomic) NSMutableArray *subItemsArray;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (retain, nonatomic) NSMutableSet *trackedSet;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) HTSLiveText *descText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (void)setUpData;
- (id)parseDisplayText:(id)a0 fontSize:(double)a1;
- (void)handleItemTappedTrack:(id)a0;
- (void)handleItemShowTrack:(id)a0;
- (void)trackEvent:(id)a0 extraTrackParams:(id)a1;
- (void)openUseRequiredSchema;
- (id)initWithConfigItem:(id)a0 dismissCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)setup;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
