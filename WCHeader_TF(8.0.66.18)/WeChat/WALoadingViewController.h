@class UIColor, NSString, WAContact, UIScreenEdgePanGestureRecognizer;
@protocol WALoadingViewControllerDelegate, WAMinimizeDelegate;

@interface WALoadingViewController : MMUIViewController {
    BOOL m_isBlackStatusBar;
    BOOL _isViewDidAppear;
    BOOL _isPopMyselfAfterDidAppear;
    BOOL _isCallPopMySelf;
    UIScreenEdgePanGestureRecognizer *_panGesture;
}

@property (retain, nonatomic) WAContact *contact;
@property (weak, nonatomic) id<WALoadingViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WAMinimizeDelegate> minimizeDelegate;
@property (nonatomic) BOOL isCallReturn;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL forbidStatusBarInset;
@property (nonatomic) unsigned long long darkmodeSpecificType;
@property (nonatomic) BOOL hideCapsuleMenu;
@property (nonatomic) BOOL isInSheetMode;
@property (retain, nonatomic) UIColor *loadingBackgroundColor;
@property (retain, nonatomic) UIColor *loadingForegroundTextColor;
@property (copy, nonatomic) id /* block */ viewDidAppearCallback;

- (void)viewDidLoad;
- (id)initWithContact:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateLeftBarItemWithNavMode:(long long)a0;
- (BOOL)isViewDidAppear;
- (void)updateContact:(id)a0;
- (void)popMyselfAfterViewDidAppear;
- (void)popMyselfViewController;
- (BOOL)takeOverLoadFailedBehavior;
- (void)onTaskLoadingFailed;
- (void)showDownloadingProgressView;
- (void)setThumbImage:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)changeStatusBarToBlack:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)onReturn;
- (void)dismissSelfAndMinimizeIfNeed;
- (double)statusBarInset;
- (void)addPanGesture;
- (void)removePanGesture;
- (void)handleScreenEdgesPanGesture:(id)a0;
- (void).cxx_destruct;

@end
