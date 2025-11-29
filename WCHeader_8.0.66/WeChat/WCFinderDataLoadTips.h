@class WCFinderAnimationLoadingView, WCFinderDataLoadTipsConfig, MMUIButton;
@protocol WCFinderDataLoadTipsDelegate;

@interface WCFinderDataLoadTips : UIView

@property (retain, nonatomic) MMUIButton *tipsButton;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) WCFinderDataLoadTipsConfig *config;
@property (weak, nonatomic) id<WCFinderDataLoadTipsDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateConfig:(id)a0;
- (void)setupLoading;
- (void)setupTipsBtn;
- (void)startLoadingState;
- (void)endLoadingState;
- (void)showTips:(id)a0 canRetry:(BOOL)a1;
- (void)showEmptyTips:(id)a0;
- (void)showRetryTips:(id)a0;
- (void)clear;
- (void)retryButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
