@class ScanProductItem, NSString, NSArray, UIPageControl, MMTableViewInfo, MMScrollView, UIView;

@interface ProductInfoDetailViewController : MMUIViewController <UIScrollViewDelegate, WCActionSheetDelegate> {
    MMTableViewInfo *_mainTableViewInfo;
    ScanProductItem *_productItem;
    NSArray *_detailList;
    NSArray *_bannerList;
    MMScrollView *_adScrollView;
    UIView *_headerView;
    UIPageControl *_adPageControl;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProductItem:(id)a0;
- (void)viewDidLoad;
- (void)initView;
- (void)onOperate:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (id)getTableHeaderView;
- (void)onPageControllerChangePage:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (double)getShopInfoCellHeight:(id)a0;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)onJumptoFeedBackView;
- (void).cxx_destruct;

@end
