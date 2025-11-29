@class UIPageControl, NSString, UICollectionView, AchievementInfo, UIView, MMUIButton;

@interface WCFinderGameAchievementPanelViewSheet : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AchievementInfo *achievementInfo;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAchievementInfo:(id)a0;
- (void)viewDidLoad;
- (void)makeHalfCorner:(id)a0;
- (void)setSelectedInfo:(id)a0;
- (void)showOnView:(id)a0;
- (void)onTapClose:(id)a0;
- (void)onClickClose;
- (void)onPan:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;

@end
