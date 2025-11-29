@class WCFinderLiveFeedCollectionView;
@protocol WCFinderFriendLiveSectionTableViewCellDelegate;

@interface WCFinderStreamLiveCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderLiveFeedCollectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderFriendLiveSectionTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long displayType;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupLiveCollectionView;
- (void)updateLiveView:(id)a0;
- (void)updateTitle:(id)a0;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)a0;
- (void)liveDataFetchFinish:(BOOL)a0;
- (void)liveSectionNoMoreData;
- (void)startLiveAnimation;
- (void)scrollToTop;
- (void).cxx_destruct;

@end
