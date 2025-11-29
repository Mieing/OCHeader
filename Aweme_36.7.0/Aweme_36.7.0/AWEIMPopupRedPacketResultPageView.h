@class AWEIMPopupRedPacketClaimListHeaderView, UIButton, NSArray, NSString, UILabel, AWEIMPopupRedPacketOpenDetailData, UITableView;

@interface AWEIMPopupRedPacketResultPageView : UIView <UISceneDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEIMPopupRedPacketClaimListHeaderView *claimListHeaderView;
@property (retain, nonatomic) UITableView *claimListTableView;
@property (retain, nonatomic) UILabel *reminderLabel;
@property (retain, nonatomic) UIButton *receiveFreeRedPacketButton;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) AWEIMPopupRedPacketOpenDetailData *applyDetailData;
@property (copy, nonatomic) id /* block */ exitResultPageHandler;
@property (copy, nonatomic) NSString *openSource;
@property (nonatomic) BOOL shouldHideCoverImageOnHeaderView;
@property (nonatomic) long long enterFrom;
@property (nonatomic) BOOL shouldTryToUpdateResultPageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;

- (void)configModel:(id)a0;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)remakeLottieViewConstraint:(id)a0;
- (void)executeReceiveResultAnimation;
- (void)trackResultPageClick:(id)a0;
- (void)receiveFreeRedPacket;
- (void)closeResultPage;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)updateUI;

@end
