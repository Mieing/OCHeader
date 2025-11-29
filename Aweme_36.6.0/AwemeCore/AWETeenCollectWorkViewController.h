@class AWETeenAlbumCollectListDataController, UITableView, NSString, AWEUILoadingView, AWEUserModel, AWETeenVideoCollectionDataController;
@protocol AWEUserProfileTabVCDelegate;

@interface AWETeenCollectWorkViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETeenCollectMessage, AWETeenSubscribeMessage, AWETeenAlbumCollectMessage, AWEUserProfileTabBaseMethod>

@property (retain, nonatomic) AWETeenVideoCollectionDataController *videoDataController;
@property (retain, nonatomic) AWETeenAlbumCollectListDataController *albumDataController;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) struct CGPoint { double x; double y; } savedContentOffset;
@property (nonatomic) BOOL videoRequestSuccess;
@property (nonatomic) BOOL albumRequestSuccess;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) long long videoCollectRow;
@property (nonatomic) long long albumCollectRow;
@property (nonatomic) long long videoShowCount;
@property (nonatomic) long long albumShowCount;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)p_onScrollDidEnd;
- (void)p_configData;
- (void)didUpdateAlbumCollectStatus:(long long)a0 albumID:(id)a1;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)didFinishCollectWithItemID:(id)a0 actionType:(unsigned long long)a1 collectCount:(id)a2;
- (void)handleVideoDiggedNotification:(id)a0;
- (void)p_eventTracnkingFavouriteShow;
- (void)p_refreshVideoData;
- (void)p_refreshAlbumData;
- (void)p_refreshAllData;
- (void)removeAllIfNeededWithUser:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0 referString:(id)a1;
- (void)p_setupUI;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)contentView;
- (id)initWithUser:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)refreshData;

@end
