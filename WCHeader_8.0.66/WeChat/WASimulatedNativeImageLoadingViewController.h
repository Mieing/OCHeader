@class MMProgressViewEx, UIImageView, WATitleView, MMUIButton;

@interface WASimulatedNativeImageLoadingViewController : WALoadingViewController {
    MMUIButton *_quitButton;
    WATitleView *_titleView;
    long long _orientation;
    UIImageView *_loadingImageView;
    MMProgressViewEx *_loadingView;
}

- (id)initWithContact:(id)a0 pagePath:(id)a1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (void)showTitleLoading;
- (void)showBufferingView;
- (void)setThumbImage:(id)a0;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void).cxx_destruct;

@end
