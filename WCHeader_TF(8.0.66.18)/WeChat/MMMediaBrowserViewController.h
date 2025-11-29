@class MMMediaBrowserView, MMMediaBrowserReporter, MMScrollActionSheet, NSString, UIPanGestureRecognizer;
@protocol MMMediaBrowserViewModel;

@interface MMMediaBrowserViewController : MMUIViewController <MMMediaBrowserViewDelegate, MMScrollActionSheetDelegate, MMMediaBrowserReporterProtocol>

@property (retain, nonatomic) id<MMMediaBrowserViewModel> viewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) MMMediaBrowserReporter *mediaBrowserReporter;
@property (retain, nonatomic) MMMediaBrowserView *mediaView;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractiveDismiss;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)setupScrollActionSheet;
- (void)handleShareFriend:(id)a0;
- (void)handleFavorite;
- (void)setNavBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)onBackButtonClicked:(id)a0;
- (void)onMoreButtonClicked:(id)a0;
- (BOOL)onSingleTap;
- (void)onLongPress;
- (void)onDragBegin:(id)a0;
- (void).cxx_destruct;

@end
