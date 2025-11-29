@class NSArray, UIImageView, NSString, UILabel, UIView, UITableView;
@protocol AWEHotMusicChartListViewControllerDelegate;

@interface AWEHotMusicChartListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *closeView;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSArray *musicList;
@property (copy, nonatomic) NSString *currentMusicId;
@property (weak, nonatomic) id<AWEHotMusicChartListViewControllerDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closePanel;
- (void)shootSameWithMusicInfo:(id)a0;
- (id)initWithMusicList:(id)a0 currentMusicId:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
