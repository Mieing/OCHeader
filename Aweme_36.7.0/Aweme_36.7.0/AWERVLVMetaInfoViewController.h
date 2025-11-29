@class NSString, AWELVideoAlbumInfoModel, UITableView;

@interface AWERVLVMetaInfoViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *model;
@property (copy, nonatomic) id /* block */ metaInfoCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshModel:(id)a0;
- (id)panelContentView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)contentScrollView;
- (void)closeButtonTapped;

@end
