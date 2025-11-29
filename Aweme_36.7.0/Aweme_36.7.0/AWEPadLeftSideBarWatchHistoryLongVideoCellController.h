@class AWEPadLeftSideBarWatchHistoryLongVideoCellModel;

@interface AWEPadLeftSideBarWatchHistoryLongVideoCellController : AWEPadLeftSideBarWatchHistoryBaseCellController

@property (retain, nonatomic) AWEPadLeftSideBarWatchHistoryLongVideoCellModel *model;

- (void)configView:(id)a0;
- (BOOL)isCellControllerValid;
- (void)transferFail:(id)a0 errorMsg:(id)a1 sceneName:(id)a2 moduleNname:(id)a3;
- (BOOL)Enable;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;
- (void)didSelectItem;

@end
