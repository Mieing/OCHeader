@class CAGradientLayer, NSString, UICollectionView, WCFinderFeedLayoutContentVM, UIView, NSMutableArray, UILabel;
@protocol WCFinderFriendLiveSectionTableViewCellDelegate;

@interface WCFinderLiveFeedCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, LOTColorValueDelegate, WCGeneralMonitorDelegate, WCFinderFinderTopLiveCellDelegate>

@property (retain, nonatomic) UIView *liveHeaderView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) WCFinderFeedLayoutContentVM *layoutContentVM;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) BOOL isInDarkMode;
@property (nonatomic) BOOL stopPlayLive;
@property (weak, nonatomic) id<WCFinderFriendLiveSectionTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isInDarkMode:(BOOL)a1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateTitle:(id)a0;
- (id)getVisibleFeedVM;
- (void)scrollToTop;
- (void)startLiveAnimation;
- (void)startPlay;
- (void)stopPlay;
- (void)initGradientLayer;
- (void)initLiveHeaderView;
- (void)initCollectionView;
- (void)updateWithDataSource:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)liveSectionNoMoreData;
- (void)liveDataFetchFinish:(BOOL)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)onClickCoverContact:(id)a0 contentVM:(id)a1;
- (struct CGColor { } *)colorForFrame:(double)a0 startKeyframe:(double)a1 endKeyframe:(double)a2 interpolatedProgress:(double)a3 startColor:(struct CGColor { } *)a4 endColor:(struct CGColor { } *)a5 currentColor:(struct CGColor { } *)a6;
- (void)monitorView:(id)a0 newExposedItems:(id)a1 lastExposedItems:(id)a2;
- (void).cxx_destruct;

@end
