@class AWEHotSearchSharePerformanceModel, AWEShareHotSearchModel, AWEHotSearchShareContainerViewState;
@protocol AWEHotSearchShareContainerViewModelDelegate;

@interface AWEHotSearchShareContainerViewModel : NSObject

@property (retain, nonatomic) AWEShareHotSearchModel *hotSearchModel;
@property (weak, nonatomic) AWEShareHotSearchModel *weakHotSearchModel;
@property (retain, nonatomic) AWEHotSearchSharePerformanceModel *performanceModel;
@property (retain, nonatomic) AWEHotSearchShareContainerViewState *viewState;
@property (nonatomic) BOOL hasTrackError;
@property (weak, nonatomic) id<AWEHotSearchShareContainerViewModelDelegate> delegate;

- (id)initWithHotSearchModel:(id)a0 shouldWeakRef:(BOOL)a1;
- (BOOL)shouldOptimizeToast;
- (void)shareFailedWithErrorType:(long long)a0;
- (void)trackWithErrorType:(long long)a0 extra:(id)a1;
- (void)trackPerformance;
- (void)resetHotSearchModel;
- (void).cxx_destruct;
- (double)currentTime;
- (void)addObserver;
- (void)requestData;

@end
