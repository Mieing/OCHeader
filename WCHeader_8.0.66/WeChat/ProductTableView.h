@class MMUIViewController, NSString, UIView, LocationRetriever, NSMutableDictionary, ScanProductItem, NSMutableArray, ProductMediaItemView, MMTableView;
@protocol ProductTableViewDelegate;

@interface ProductTableView : MMUIView <ProductKeyValueTableCellDelegate, MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, ProductMediaItemViewDelegate> {
    MMTableView *_tableView;
    NSMutableArray *_musicInfoList;
    ProductMediaItemView *_mediaItemView;
    ScanProductItem *_productItem;
    NSMutableDictionary *_indexTextCellDict;
    MMUIViewController *_containerViewController;
    double _bottomInset;
    LocationRetriever *_locationRetriver;
    UIView *_footerView;
}

@property (retain, nonatomic) NSString *epName;
@property (retain, nonatomic) NSString *musicSinger;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int getA8KeyScence;
@property (nonatomic) unsigned int jumpProfileScence;
@property (weak, nonatomic) id<ProductTableViewDelegate> deleage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ProductItem:(id)a1 ViewController:(id)a2;
- (id)getTableView;
- (void)setHeaderView:(id)a0;
- (void)setFooterView:(id)a0;
- (void)reloadTableData:(id)a0;
- (id)getTextCellByIndexPath:(id)a0;
- (void)setTableInset;
- (void)initTableView;
- (void)layoutSubviews;
- (void)initView;
- (void)initMusicList;
- (void)dealloc;
- (id)getServiceContant:(id)a0;
- (id)getSystemAppID:(unsigned int)a0;
- (BOOL)isBannerCell:(id)a0;
- (BOOL)isHiddenCell:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)loadCellBgImageView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadLinkCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadDetailCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadUserCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadTextCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadMediaCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadImageCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadMusicCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadProductCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadCardCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadGridRowCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadReferCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadHeaderCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (void)loadCommentCellSubView:(id)a0 actionBase:(id)a1 indexPath:(id)a2;
- (id)genNameLabel2Cell:(id)a0;
- (id)genDigestLabel2Cell:(id)a0;
- (id)genDescLabel2Cell:(id)a0;
- (id)genGridItemView:(id)a0 withStatId:(id)a1 gridItemListCount:(long long)a2;
- (void)onSingleTap:(id)a0;
- (void)onPlayBtnClicked:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)onCellViewMore:(id)a0;
- (void)mediaItemView:(id)a0 openMediaUrl:(id)a1 actionBase:(id)a2 actionListCount:(unsigned long long)a3;
- (void).cxx_destruct;

@end
