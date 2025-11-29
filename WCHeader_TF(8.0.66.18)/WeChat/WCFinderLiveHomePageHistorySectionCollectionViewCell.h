@class NSArray, WCFinderLiveHomePageHistorySectionView, UICollectionView, NSString;
@protocol WCFinderLiveHomePageHistorySectionViewDelegate;

@interface WCFinderLiveHomePageHistorySectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageHistorySectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderLiveHomePageHistorySectionViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)a0 styleInfo:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)a0;
- (void)reloadData;
- (void)scrollToTop:(BOOL)a0;
- (void).cxx_destruct;

@end
