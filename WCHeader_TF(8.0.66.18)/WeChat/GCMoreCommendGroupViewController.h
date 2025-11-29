@class GCCollectionViewManager, GCCollectionViewSectionModel, UICollectionView, GCLoadingMoreCellModel, NSString, GCGroupServer;

@interface GCMoreCommendGroupViewController : GCReportBaseVc <GCLoadMoreProtocol, GCBaseGroupCellModelDelegate, GCChatRoomImageZoomAnimationDelegate>

@property (retain, nonatomic) GCCollectionViewManager *collectionViewManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) GCGroupServer *groupServer;
@property (retain, nonatomic) GCCollectionViewSectionModel *sectionModel;
@property (retain, nonatomic) GCLoadingMoreCellModel *loadMoreCellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)loadMoreChatRoom;
- (void)viewDidLayoutSubviews;
- (void)onLoadMoreData;
- (void)onOpenChatRoomConfig:(id)a0 cellModel:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImgFrameWithIdentifier:(id)a0;
- (void)onMoreChatRoomRespone:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })collectionViewFrame;
- (void).cxx_destruct;

@end
