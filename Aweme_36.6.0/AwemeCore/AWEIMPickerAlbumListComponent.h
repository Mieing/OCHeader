@class UIView, NSString, NSArray, UIImageView, UIControl, UITableView, MASConstraint, UILabel;

@interface AWEIMPickerAlbumListComponent : AWEIMComponentBase <UITableViewDataSource, UITableViewDelegate, AWEIMPickerAlbumListInterface>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MASConstraint *albumListViewBC;
@property (retain, nonatomic) UIControl *containerView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (retain, nonatomic) UITableView *albumListView;
@property (copy, nonatomic) NSArray *albumList;
@property (nonatomic) double navigationBarHeight;
@property (retain, nonatomic) UIView *naviBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)updateCurrentAlbum:(id)a0;
- (void)updateWholeAlbumList:(id)a0;
- (void)createNaviSwitchEntrance;
- (void)createAlbumListView;
- (void)switchButtonPressed;
- (void)navArrowDown;
- (void)foldAlbumListView;
- (void)navArrowUp;
- (void)showAlbumListView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)addConstraints;

@end
