@class NSArray, NSString, UITableView;

@interface AWEVideoStickerSocialItemListViewController : AWEHalfScreenBaseViewController <UITableViewDelegate, UITableViewDataSource, AWEVideoStickerSocialItemListViewControllerProtocol>

@property (copy, nonatomic) NSArray *socialInfos;
@property (copy, nonatomic) id /* block */ itemSelectHander;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showSocialItemListPopViewWithSocialInfos:(id)a0 itemSelectHander:(id /* block */)a1;

- (id)aAWEPadModuleAdapter;
- (void)p_setupView;
- (id)initWithWithSocialInfos:(id)a0 itemSelectHander:(id /* block */)a1;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)animationStyle;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)containerWidth;

@end
