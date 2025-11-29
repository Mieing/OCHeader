@class MMLiveTaskId, MMFinderLivePIPMinimizeIndicatorView;

@interface MMFinderLiveCustomPIPMinimizeIndicatorContainerView : UIView

@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) MMFinderLivePIPMinimizeIndicatorView *ktvIndicatorView;

- (id)initWithTaskId:(id)a0;
- (void)configBasicAttributes;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutKTVIndicatorView;
- (void)createKTVIndicatorView;
- (void)displayKTVIndicator;
- (void)hideIndicators;
- (void)forceRefreshUI;
- (void)hideIndicatorsExcept:(id)a0;
- (void)removeAllSubViews;
- (void)hideKTVIndicator;
- (void).cxx_destruct;

@end
