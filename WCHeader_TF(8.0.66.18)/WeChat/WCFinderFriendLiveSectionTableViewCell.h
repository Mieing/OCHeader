@class WCFinderLiveFeedCollectionView;
@protocol WCFinderFriendLiveSectionTableViewCellDelegate;

@interface WCFinderFriendLiveSectionTableViewCell : UITableViewCell

@property (retain, nonatomic) WCFinderLiveFeedCollectionView *liveCollectionView;
@property (weak, nonatomic) id<WCFinderFriendLiveSectionTableViewCellDelegate> delegate;
@property (nonatomic) unsigned long long displayType;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupLiveCollectionView:(BOOL)a0;
- (void)updateLiveView:(id)a0;
- (void)updateLiveView:(id)a0 isInDarkMode:(BOOL)a1;
- (void)updateTitle:(id)a0;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)a0;
- (void)liveDataFetchFinish:(BOOL)a0;
- (void)liveSectionNoMoreData;
- (void)scrollToTop;
- (void)startPlayWhenDisplay;
- (void)stopPlayWhenDisappear;
- (void).cxx_destruct;

@end
