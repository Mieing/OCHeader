@class NSString, NSArray, AWEVideoPublishViewModel, AWETextLoadingView, NSDictionary, UITableView, UILabel, AWEHashtagSuggestionViewConfig;

@interface AWEVideoPublishInputSuggestionView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) AWETextLoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWEHashtagSuggestionViewConfig *config;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long triggerAction;
@property (nonatomic) BOOL showHitBlockListTip;
@property (retain, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) id /* block */ didChooseSuggestionBlock;
@property (nonatomic) BOOL isSearchMode;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSDictionary *commomTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildUI;
- (void)updateCellStyle:(id)a0;
- (id)generateTrackStringWithIndexpath:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(unsigned long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
