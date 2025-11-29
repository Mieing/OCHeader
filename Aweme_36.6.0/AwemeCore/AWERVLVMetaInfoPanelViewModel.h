@class NSString, AWELVideoAlbumInfoModel, UITableView;

@interface AWERVLVMetaInfoPanelViewModel : AWERVLVBasePanelViewModel <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, AWERVLVFloatPanelProtocol, AWERVLVRightPushPanelProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshModel:(id)a0;
- (void)panelDidLoad;
- (id)panelContentView;
- (double)pushPanelTopPadding;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)contentScrollView;

@end
