@class NSArray, UICollectionView, NSString, WCFinderLiveHomePageAdSectionView;
@protocol WCFinderLiveHomePageAdSectionViewDelegate;

@interface WCFinderLiveHomePageAdSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageAdSectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderLiveHomePageAdSectionViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)a0;
- (void).cxx_destruct;

@end
