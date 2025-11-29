@class WCFinderLiveHomePageSpecialColumnSectionView, NSString, NSArray, UICollectionView;
@protocol WCFinderLiveHomePageSpecialColumnSectionViewDelegate;

@interface WCFinderLiveHomePageSpecialColumnSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageAutoPlayProtocol, WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageSpecialColumnSectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderLiveHomePageSpecialColumnSectionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)a0;
- (void)reloadData;
- (void)scrollToTop:(BOOL)a0;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (void).cxx_destruct;

@end
