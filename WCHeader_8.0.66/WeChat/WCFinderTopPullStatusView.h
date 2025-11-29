@class WCFinderAnimationLoadingView, UIScrollView, UILabel, UIView;
@protocol WCFinderTopPullStatusViewDelegate;

@interface WCFinderTopPullStatusView : UIView

@property (weak, nonatomic) UIView *container;
@property (weak, nonatomic) UIScrollView *gestureView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ uninstallBlock;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL enable;
@property (weak, nonatomic) id<WCFinderTopPullStatusViewDelegate> delegate;

+ (id)placeholder:(id)a0 commit:(id /* block */)a1;

- (void)installToContainer:(id)a0 scrollView:(id)a1 uninstallBlock:(id /* block */)a2;
- (void)handlePan:(id)a0;
- (BOOL)_stateIsHidden;
- (BOOL)_shouldPullShowSelf;
- (BOOL)_allowTopPull;
- (void)onTriggerPull;
- (void)onTapRetry;
- (void)onNormal;
- (void)onLoading;
- (void)onError;
- (void)onNomore;
- (void)onChangeState:(unsigned long long)a0;
- (void)setState:(unsigned long long)a0 from:(unsigned long long)a1;
- (void)ensureDisplayForState:(unsigned long long)a0;
- (id)ensureLoadingView:(BOOL)a0;
- (id)ensureLabel:(BOOL)a0;
- (void)layoutSubviews;
- (void)_doLayout;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
