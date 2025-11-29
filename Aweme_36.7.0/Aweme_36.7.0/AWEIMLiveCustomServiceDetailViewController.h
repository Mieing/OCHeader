@class AWEIMMessageConversation, NSString, NSDictionary, UITableView;

@interface AWEIMLiveCustomServiceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isStickOnTop;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSDictionary *liveCustomExtra;
@property (nonatomic) long long role;
@property (nonatomic) BOOL isInLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_backBtnClicked;
- (void)p_trackButtonClick:(id)a0;
- (id)p_commonParams;
- (void)p_trackSettingShow;
- (void)p_didStickOnTop;
- (void)p_didMute;
- (long long)typeForCell:(long long)a0;
- (void)p_onClickMute:(BOOL)a0;
- (void)p_onClickStickOnTop:(BOOL)a0;
- (void)p_onClickReport;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
