@class NSString, WCFinderTopicRouteParams, WCFinderMusicEventView, UIBarButtonItem;

@interface WCFinderFullMusicEventViewController : MMUIViewController <WCFinderMusicEventViewDelegate, WCFinderInvalidMusicTopicViewDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderMusicEventView *musicEventView;
@property (retain, nonatomic) WCFinderTopicRouteParams *params;
@property (copy, nonatomic) NSString *navigationBarTitle;
@property (retain, nonatomic) UIBarButtonItem *moreRightButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBarTitle;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)currentViewController;
- (void)initMusicNaviItems;
- (void)onFinderMusicTopicHeaderViewRefresh;
- (double)topInsetOfFinderTabPageView;
- (void)finderMusicTopicInvalidWithErrorCode:(int)a0 errMsg:(id)a1;
- (void)onConfirmButtonClicked;
- (void).cxx_destruct;

@end
