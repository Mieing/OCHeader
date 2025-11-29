@class UIPanGestureRecognizer, UILabel, UICollectionView, WCStoryTimelineDataVM, WCStoryFriendsCollectionDismissTransition, WCStoryTimelineDataUnit, UIButton, NSMutableArray, NSString, MMUIView, UIScreenEdgePanGestureRecognizer, UICollectionViewFlowLayout, WCStoryDismissInteractiveTransition, WCStoryReportUtil, MMUIButton;
@protocol WCStoryFriendsCollectionViewControllerDelegate;

@interface WCStoryFriendsCollectionViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, WCStoryDismissInteractiveTransitionDelegate, UIViewControllerTransitioningDelegate, IWCStoryTimelineDataVMExt>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) WCStoryTimelineDataVM *storyTimelineDataVM;
@property (retain, nonatomic) WCStoryTimelineDataUnit *storyTimelineDataUnit;
@property (retain, nonatomic) NSMutableArray *timestampUnreadCellModelArray;
@property (retain, nonatomic) NSMutableArray *timestampReadCellModelArray;
@property (retain, nonatomic) NSMutableArray *unreadCornerMessageCellModelArray;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUIView *topView;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackInteractivePopGesture;
@property (retain, nonatomic) WCStoryFriendsCollectionDismissTransition *dismissAnimateTransition;
@property (retain, nonatomic) WCStoryDismissInteractiveTransition *dimissInteractiveTransition;
@property (retain, nonatomic) UILabel *emptyTipsLabel;
@property (weak, nonatomic) UIButton *cleanButton;
@property (nonatomic) BOOL isCleanUnreadStory;
@property (nonatomic) unsigned long long clickClearCount;
@property (nonatomic) unsigned long long clickRenewCount;
@property (weak, nonatomic) id<WCStoryFriendsCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) WCStoryReportUtil *storyReportUtil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)reportExposeData;
- (id)userNameStrFromDataUnits:(id)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)createCleanButton;
- (void)handleTopViewPanGesture:(id)a0;
- (void)handleCollectionViewPanGesture:(id)a0;
- (void)setupData;
- (void)setupUI;
- (void)setupCollectionViewWithGradientEffect;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)onClickClose;
- (void)onClickClean;
- (void)cleanUnreadStory;
- (void)reportCleanExposeData;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)shouldShowMessageSection:(unsigned long long)a0;
- (BOOL)shouldTimelineUnReadSection:(unsigned long long)a0;
- (void)didSelectUnreadCornerMessageActionWithIndex:(unsigned long long)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)addPopBackInteractivePopGesture;
- (void)onDismissInteractiveTransitionBegin:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)storyTimelineDataItemsHasUpdate;
- (void).cxx_destruct;

@end
