@class UIButton, NSString, AWETeenExternalAlbumTitleView, AWETeenExternalAlbumDataController, UITableView;

@interface AWETeenExternalAlbumPanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWETeenExternalAlbumDataController *dataController;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenExternalAlbumTitleView *titleView;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *anchorAwemeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)loadMore;
- (void)loadPrevious;
- (void)closeButtonDidClick:(id)a0;
- (id)initWithDataController:(id)a0;
- (void)scrollToCellAtIndex:(long long)a0;
- (void)reloadWithAnchorAweme:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)setupUI;

@end
