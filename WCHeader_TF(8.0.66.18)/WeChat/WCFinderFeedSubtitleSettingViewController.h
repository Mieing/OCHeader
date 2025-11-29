@class NSIndexPath, NSString, WCFinderFeedContentVM, UILabel, NSMutableArray, UITableView;
@protocol WCFinderFeedSubtitleSettingViewControllerDelegate;

@interface WCFinderFeedSubtitleSettingViewController : WCFinderCustomPanelSheet <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *headerTipsLabel;
@property (retain, nonatomic) NSMutableArray *itemArray;
@property (retain, nonatomic) NSIndexPath *initialSelectedIndexPath;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderFeedSubtitleSettingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadContentView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithContentVM:(id)a0;
- (void)updateWithLanguageArray:(id)a0 displaySet:(id)a1;
- (BOOL)isLandScape;
- (double)tableViewHeight;
- (id)indexPathOfSelectRow:(id)a0;
- (id)titleAtIndex:(unsigned long long)a0;
- (id)reportDictWithSelectLanguageSet:(id)a0;
- (id)tableHeaderView;
- (id)tableFooterView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
