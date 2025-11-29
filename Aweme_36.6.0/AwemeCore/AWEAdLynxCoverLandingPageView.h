@class NSString;

@interface AWEAdLynxCoverLandingPageView : AWEBDARifleView <AWEBDARifleViewDelegate, AWEAdLynxCoverLandingPageView>

@property (nonatomic) BOOL isShowEventSent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isFullScreenLynxViewExistWithModel:(id)a0;
+ (BOOL)isAdLynxComponentBelowWebViewTopBarExistWithModel:(id)a0;
+ (BOOL)isAdLynxCoverLandingPageViewExistWithModel:(id)a0;

- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (id)lynxComponent;
- (void)loadWithConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAweme:(id)a1 onViewController:(id)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)handleViewWillAppear;
- (void)handleViewDidDisappear;

@end
