@class MMLoadingView, UIView;

@interface WAForceReloadLoadingWindowVC : MMWindowViewController {
    UIView *_backView;
    MMLoadingView *_loadingView;
}

@property (nonatomic) BOOL needLoading;

- (id)init;
- (void)viewDidLoad;
- (void)getCurrentScreenShot;
- (void)delayHide:(id)a0;
- (void)hideWithAnimated:(int)a0;
- (void).cxx_destruct;

@end
