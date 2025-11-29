@class UILabel, UITableView, MMMusicMVRecommendAnimationLoadingView, UIButton, UIView, WCFinderLastestPlayVideoInfoMgr, NSString, NSMutableArray, MMMusicMVRecommendTableCell, MMMusicMVModel, NSData, MMMusicMVRecommendHeaderView, MMMusicLiveCGIMgr, UIPanGestureRecognizer;
@protocol MMMusicMVRecommendViewControllerDataSource;

@interface MMMusicMVRecommendViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, WCActionSheetDelegate, MMMusicMVRecommendTableCellDelegate, MMMusicMVRecommendHeaderViewDelegate, MMMusicLiveCGIMgrDelegate> {
    NSData *_lastBuff;
    NSString *_bgmSource;
    WCFinderLastestPlayVideoInfoMgr *_lastestBgmPlayVideoInfoMgr;
    MMMusicMVRecommendTableCell *_activedCell;
    UITableView *_tableView;
    UIView *_containerView;
    UIButton *_backgroundButton;
    MMMusicMVRecommendHeaderView *_headerView;
    UIPanGestureRecognizer *_panGesture;
    UILabel *_stateTipsLabel;
}

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIButton *backgroundButton;
@property (readonly, nonatomic) MMMusicMVRecommendHeaderView *headerView;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) MMMusicMVRecommendAnimationLoadingView *loadingView;
@property (nonatomic) BOOL needInternalLoadData;
@property (retain, nonatomic) MMMusicLiveCGIMgr *cgiMgr;
@property (nonatomic) BOOL isInternalLoading;
@property (retain, nonatomic) NSMutableArray *internalLoadMvModels;
@property (weak, nonatomic) id<MMMusicMVRecommendViewControllerDataSource> dataSource;
@property (retain, nonatomic) MMMusicMVModel *currentModel;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ beforePushVCBlock;
@property (copy, nonatomic) id /* block */ afterPopVCBlock;
@property (copy, nonatomic) id /* block */ closeVCBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 needInternalLoadData:(BOOL)a1;
- (void)dealloc;
- (id)stateTipsLabel;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)startVCLoading;
- (void)stopVCLoading;
- (void)addNoVideoStateTips;
- (void)reload;
- (void)internalReloadData;
- (void)updateHeaderView;
- (void)close:(id /* block */)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onClickCloseButton;
- (void)handlePanGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)hidesStatusBar;
- (id)navigationBarBackgroundColor;
- (BOOL)useBlackStatusbar;
- (void)viewWillBePresented:(BOOL)a0;
- (void)scrollCommentToTop;
- (void)onClickWithCell:(id)a0;
- (void)onMusicLiveGetMVRecommentList:(id)a0 continueFlag:(BOOL)a1 requestId:(id)a2;
- (void).cxx_destruct;

@end
