@class NSString, UICollectionView, UILabel, UIView, AWEDCFeedSwitchPreviewVerticalLayout;

@interface AWEDCFeedSwitchPreviewVerticalComponent : AWEDCFeedSwitchPreviewBaseComponent <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *c2VCContainerView;
@property (retain, nonatomic) UIView *dcTitleContainerView;
@property (retain, nonatomic) UILabel *dcTitleLabel;
@property (retain, nonatomic) UIView *feedVCContainerView;
@property (retain, nonatomic) UIView *feedTitleContainerView;
@property (retain, nonatomic) UILabel *feedTitleLabel;
@property (retain, nonatomic) UIView *feedTableView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *refreshView;
@property (retain, nonatomic) AWEDCFeedSwitchPreviewVerticalLayout *customLayout;
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL clickAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewConfigDict;
+ (double)previewTopPadding;
+ (double)dcContainerTopPadding;
+ (double)cellHeight;

- (void)refreshAction;
- (void)quitWithSelectIndex:(long long)a0 animated:(BOOL)a1;
- (void)beginMoveInAnimation;
- (void)trackEnterAnimationBegin;
- (void)trackEnterAnimationEnd;
- (void)quitWithSelectCell:(id)a0 outCell:(id)a1 animated:(BOOL)a2;
- (void)prepareCollectionViewContent;
- (void)prepareC2RelatedViews;
- (void)prepareFeedTableRelatedViews;
- (void)quitWithAnimationCancel;
- (double)getEnterAnimationDuration;
- (double)moveOutDuration;
- (void)settingAction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrameWithIsDCContainer:(BOOL)a0;
- (void)performCardFlashAnimationIfNeeded;
- (BOOL)isTargetSameAsSource;
- (void)moveInPreviewView:(id)a0 indexPath:(id)a1;
- (void)setIndexPathIfClickC2CardWithCollectionView:(id)a0 IndexPath:(id)a1;
- (void)setupRefreshView;
- (void)setupHeaderContainer;
- (void)setupDCHeaderContainer;
- (void)moveOutToFullScreen:(id)a0 cell:(id)a1 animate:(BOOL)a2;
- (void)moveOutPreviewView:(id)a0 cell:(id)a1 animate:(BOOL)a2;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
