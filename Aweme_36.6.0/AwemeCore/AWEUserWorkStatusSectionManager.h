@class AWEProfileVacantController, AWEUserWorkStatusModel, NSString, AWEUILoadingView, NSError;
@protocol AWEDCFeedListResponseProtocol;

@interface AWEUserWorkStatusSectionManager : AWEPostWorkBaseController <AWEProfileVacantDelegate, AWEUserWorkChangeControllerProtocol>

@property (nonatomic) double top;
@property (nonatomic) double mj_insetB;
@property (nonatomic) BOOL inPreloadMore;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEUserWorkStatusModel *statusModel;
@property (retain, nonatomic) AWEProfileVacantController *vacantController;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<AWEDCFeedListResponseProtocol> response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)sectionViewModel;
- (id)profileVacantContainerView:(unsigned long long)a0;
- (void)profileVacantConfig:(id)a0 state:(unsigned long long)a1;
- (id)profileVacantTrackParams:(unsigned long long)a0 action:(unsigned long long)a1;
- (void)willRefreshForAddAwemes;
- (void)requestDataCompletionWithReason:(unsigned long long)a0 error:(id)a1 refresh:(BOOL)a2 response:(id)a3;
- (void)updateVacantState;
- (BOOL)checkShowLoadingView;
- (BOOL)checkShowVacantView;
- (id)statusSectionViewModel;
- (void)adjustLoadingViewFrame;
- (void)tryAdjustFooter;
- (void)tryRemoveLoadingView;
- (double)contentViewHight;
- (double)collectionViewEmptyHeight;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)user;
- (void)containerViewDidLoad;

@end
