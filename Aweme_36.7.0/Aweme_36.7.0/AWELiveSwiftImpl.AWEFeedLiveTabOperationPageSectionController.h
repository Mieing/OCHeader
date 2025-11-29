@interface AWELiveSwiftImpl.AWEFeedLiveTabOperationPageSectionController : AWEBaseListSectionController <AWELiveSwiftImpl.LivePageAppLifeCycleProtocol, AWELiveSwiftImpl.LivePageContainerLifeCycleProtocol>

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inset;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;

+ (BOOL)enableCellControllerDispatch;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)onContainerViewDidDisappear;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewWillAppear;
- (void)didCreateCellController:(id)a0 cellViewModel:(id)a1;
- (id)init;
- (id)sectionBackgroundColor;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
