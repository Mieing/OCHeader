@class NSString, WCNormalVideoPlayerView;

@interface WCNormalVideoPlayerViewController : MMUIViewController <WCNormalVideoPlayerViewDelegate>

@property (retain, nonatomic) WCNormalVideoPlayerView *videoPlayer;
@property (retain, nonatomic) NSString *videoUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoUrl:(id)a0;
- (BOOL)hidesStatusbar;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)onCloseButtonClicked;
- (void)onGetViewWidthAndHeight:(double *)a0 leftPartWidth:(double *)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
