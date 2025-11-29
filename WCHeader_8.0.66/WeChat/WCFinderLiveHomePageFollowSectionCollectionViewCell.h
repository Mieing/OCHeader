@class NSArray, UICollectionView, WCFinderLiveHomePageFollowSectionView, NSString;
@protocol WCFinderLiveHomePageFollowSectionViewDelegate;

@interface WCFinderLiveHomePageFollowSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageFollowSectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderLiveHomePageFollowSectionViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeight:(BOOL)a0 styleInfo:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)a0;
- (void)reloadData;
- (void)scrollToTop:(BOOL)a0;
- (void).cxx_destruct;

@end
