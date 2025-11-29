@class NSString;

@interface AWEGoodsFeedDetailTableViewController : AWEAwemeDetailTableViewController <UIGestureRecognizerDelegate, AWEPageSnapControllerDelegate, AWEECGoodsFeedProductCardTableViewCellDelegate, AWELiveRoomMessage>

@property (nonatomic) BOOL didShowBottomGuide;
@property (nonatomic) BOOL didCompleteBottomGuide;
@property (nonatomic) BOOL isFullMode;
@property (nonatomic) double panPercent;
@property (nonatomic) BOOL isPanning;
@property (weak, nonatomic) id ecomContainerDelegate;
@property (copy, nonatomic) id /* block */ returnBlock;
@property (copy, nonatomic) id /* block */ updateBottomGuideBlock;
@property (copy, nonatomic) id /* block */ updateNaviBarBlock;
@property (copy, nonatomic) id /* block */ willConfigCell;
@property (copy, nonatomic) id /* block */ initialDataSourceFinishedBlock;
@property (copy, nonatomic) NSString *videoID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeWithAnimated:(BOOL)a0;
- (void)cellWillDisplay:(id)a0 forRowAtIndexPath:(id)a1 tableView:(id)a2;
- (void)onScrollDidEnd;
- (double)contentOffsetYForCellAtIndex:(long long)a0;
- (void)audienceQuitByCloseButtonWithSlideVC:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)onScrollDidScroll:(id)a0 nextModel:(id)a1 percentage:(double)a2;
- (id)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (struct CGPoint { double x0; double x1; })customTargetContentOffsetWithScrollingVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)initParams;
- (void)registerMessage;
- (id)createDefaultConfig;
- (long long)currentAdjustTableViewOffsetY;
- (void)updateFirstCardPanPercent:(double)a0;
- (void)unRegisterMessage;
- (id)goodsFeedModelWithIndexPath:(id)a0;
- (double)getModelInitTimeWithAwemeItemID:(id)a0;
- (void)updateFirstCardLayoutWithIsFullMode:(BOOL)a0 animationTime:(double)a1;
- (void)scrollToNextCard;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;

@end
