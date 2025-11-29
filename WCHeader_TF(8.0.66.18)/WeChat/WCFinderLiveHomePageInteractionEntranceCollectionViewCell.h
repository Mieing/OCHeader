@class NSArray, UICollectionView, WCFinderLiveHomePageInteractionEntranceSectionView, NSString;
@protocol WCFinderLiveHomePageInteractionEntranceSectionViewDelegate;

@interface WCFinderLiveHomePageInteractionEntranceCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageInteractionEntranceSectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderLiveHomePageInteractionEntranceSectionViewDelegate> delegate;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightInWidth:(double)a0;
+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initializeIfNeeded:(id)a0;
- (void)layoutSubviews;
- (void)updateWithVM:(id)a0;
- (void).cxx_destruct;

@end
