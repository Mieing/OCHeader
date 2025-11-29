@class AWEPadLeftSideBarWatchHistoryPresenter;

@interface AWEPadLeftSideBarWatchHistoryBaseCellController : NSObject

@property (weak, nonatomic) AWEPadLeftSideBarWatchHistoryPresenter *presenter;

- (void)configView:(id)a0;
- (BOOL)isCellControllerValid;
- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;
- (void)didSelectItem;

@end
