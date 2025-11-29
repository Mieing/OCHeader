@class WCFinderAnimationLoadingView;
@protocol WCFinderLiveHomePageFooterViewActionDelegate;

@interface WCFinderLiveHomePageFooterView : UICollectionReusableView

@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (nonatomic) unsigned long long state;
@property (nonatomic) double pulldownWidth;
@property (nonatomic) double triggerWidth;
@property (weak, nonatomic) id<WCFinderLiveHomePageFooterViewActionDelegate> delegate;

+ (id)footerIdentifier;
+ (double)footerWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLoadingImage:(id)a0;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (BOOL)isLoadingNow;
- (void)onResumeOfLoading;
- (void)refreshScrollViewDidScroll:(id)a0;
- (void)didEndDragging:(id)a0;
- (void).cxx_destruct;

@end
