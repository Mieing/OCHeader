@class NSString, AWEUILoadingView, AWEProfileVacantController;

@interface AWEUserWorkStatusController : AWEUserWorkController <AWEProfileVacantDelegate, AWEUserWorkControllerStatusProtocol>

@property (nonatomic) double top;
@property (nonatomic) BOOL inPreloadMore;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) double mjInsetBResetedOffset;
@property (retain, nonatomic) AWEProfileVacantController *vacantController;
@property (nonatomic) unsigned long long pageState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)profileVacantContainerView:(unsigned long long)a0;
- (void)profileVacantConfig:(id)a0 state:(unsigned long long)a1;
- (id)profileVacantTrackParams:(unsigned long long)a0 action:(unsigned long long)a1;
- (void)requestDataCompletionWithReason:(unsigned long long)a0 error:(id)a1 refresh:(BOOL)a2 response:(id)a3;
- (void)showEmptyIfNeeded;
- (void)adjustLoadingViewFrame;
- (void)tryAdjustFooter;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewDidLoad;

@end
