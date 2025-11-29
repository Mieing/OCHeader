@class NSString;

@interface AWEACCLoadingImpl : NSObject <ACCLoadingProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWindowLoadingWithAnimated:(BOOL)a0;
- (void)dismissWindowLoading;
- (id)showLoadingWithScene:(long long)a0 onView:(id)a1 afterDelay:(double)a2;
- (id)loadingViewWithScene:(long long)a0;
- (id)showWindowLoadingWithScene:(long long)a0 title:(id)a1 animated:(BOOL)a2 afterDelay:(double)a3;
- (id)showWindowLoadingWithScene:(long long)a0 title:(id)a1 animated:(BOOL)a2;
- (id)showLoadingOnWindowWithScene:(long long)a0;
- (id)showLoadingOnWindowWithScene:(long long)a0 afterDelay:(double)a1;
- (id)showLoadingWithScene:(long long)a0 onView:(id)a1;
- (id)showTextLoadingWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3 afterDelay:(double)a4;
- (id)showLoadingAndDisableUserInteractionWithScene:(long long)a0 onView:(id)a1;
- (id)showTextLoadingWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3;
- (id)progressWithScene:(long long)a0 title:(id)a1;
- (id)showProcessWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3;
- (id)loadingViewUnbackgroundWithScene:(long long)a0;
- (id)showProgressWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3 type:(long long)a4;
- (id)showLoadingWithBackgroundWithScene:(long long)a0 onView:(id)a1;
- (id)showLoadingAndDisableUserInteractionWithScene:(long long)a0 onView:(id)a1 afterDelay:(double)a2;
- (id)textLoadingViewWithScene:(long long)a0;
- (id)showProgressWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3 type:(long long)a4 afterDelay:(double)a5;
- (id)progressWithScene:(long long)a0 title:(id)a1 progressTextFont:(id)a2 progressCircleWidth:(id)a3;
- (id)showNormalProcessWithScene:(long long)a0 onView:(id)a1 title:(id)a2 animated:(BOOL)a3;
- (id)loadingViewTracker;

@end
