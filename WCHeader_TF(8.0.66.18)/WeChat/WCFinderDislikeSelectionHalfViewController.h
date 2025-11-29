@class NSString, WCFinderFeedContentVM, WCFinderAnimationLoadingView, UIButton, UITableView, NSMutableArray, NSMutableSet, UILabel, MMUIButton;

@interface WCFinderDislikeSelectionHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt>

@property (retain, nonatomic) MMUIButton *closeBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *submitBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) int commentScene;
@property (nonatomic) double heightRatio;
@property (retain, nonatomic) NSMutableArray *selectedEntries;
@property (retain, nonatomic) NSMutableSet *exposedEntries;
@property (nonatomic) BOOL selectionWithoutConfirm;
@property (copy, nonatomic) id /* block */ dislikeActionCompleteBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithContentVM:(id)a0 commentScene:(int)a1;
- (void)baseInit;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)updateDataState;
- (void)showRetryButon;
- (void)removeRetryButton;
- (void)showLoadingView;
- (void)removeLoadingView;
- (double)getMaxHalfScreenHeight;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidTransitionToNewSize;
- (id)wordingEntryAtIndex:(unsigned long long)a0;
- (void)onCloseButtonClicked:(id)a0;
- (void)onRetryButtonClicked:(id)a0;
- (void)onSubmitButtonClicked:(id)a0;
- (void)submitDislikeReason:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_handleWordingEntrySubmit:(id)a0;
- (void)_handleWordingEntrySelect:(id)a0;
- (void)reportCellEventWithIndexPath:(id)a0 event:(id)a1;
- (void)onFeedContentFeedbackReasonChanged:(id)a0;
- (void)onFeedContentFeedbackReasonFetchFail:(id)a0;
- (void)_onFeedbackReasonFetchStateUpdateWith:(id)a0;
- (void).cxx_destruct;

@end
