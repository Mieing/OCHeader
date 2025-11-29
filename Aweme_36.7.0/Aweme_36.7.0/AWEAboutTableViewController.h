@class NSArray, NSMutableDictionary, NSString, UIView, UITableView;

@interface AWEAboutTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TTTAttributedLabelDelegate, AWEAboutTableViewControllerProtocol>

@property (retain, nonatomic) UIView *topGapView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *itemModels;
@property (retain, nonatomic) NSMutableDictionary *itemModelToControllerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;
+ (Class)aAWERecordNumberAdapterClass;

- (void)attributedLabel:(id)a0 didSelectLinkWithURL:(id)a1;
- (void)backBtnClick;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (id)getCellControllerWithItemModel:(id)a0;
- (void)__setupItemModels;
- (id)__versionTableViewCell;
- (id)__websiteTitle;
- (id)__visitWebsite;
- (id)__visitTitle;
- (id)__mailTitle;
- (id)__helpDeskTelNumber;
- (id)__clientServiceTitle;
- (id)aAWERecordNumberAdapter;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
