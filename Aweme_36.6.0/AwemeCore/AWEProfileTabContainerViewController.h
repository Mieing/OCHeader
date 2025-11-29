@class NSString, AWEProfileBaseContainerViewController;
@protocol AWEUserProfileTabVCDelegate;

@interface AWEProfileTabContainerViewController : UIViewController <AWEProfileTabContainerProtocol>

@property (retain, nonatomic) AWEProfileBaseContainerViewController *baseVC;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (nonatomic) BOOL isInUserHomePage;
@property (nonatomic) BOOL isInLandingPage;
@property (nonatomic) BOOL rightFixedAreaUseContainerDataSource;
@property (nonatomic) BOOL needHeaderCellScrollable;
@property (nonatomic) BOOL isSwitchedFromRedDot;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isNeedShowCellBackgroundStatus;
@property (nonatomic) BOOL isNewFullScreenStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollToIndex:(unsigned long long)a0;
- (id)tabItemVCForModel:(id)a0 index:(long long)a1;
- (void)containerViewDidScroll:(id)a0;
- (id)currentTabVC;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })segmentFrameAtIndex:(unsigned long long)a0;
- (void)showBubbleWithText:(id)a0 index:(long long)a1;
- (void)updateWithTabItems:(id)a0;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)hideBubble;
- (double)heightForCustomSegmented;
- (void)updateWithTabItems:(id)a0 landingIndex:(long long)a1;
- (void)reloadData;
- (unsigned long long)currentIndex;
- (void).cxx_destruct;
- (id)contentView;
- (double)headerHeight;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)refreshData;

@end
