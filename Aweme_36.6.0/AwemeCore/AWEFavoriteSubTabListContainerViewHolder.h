@class AWEFavoriteSegmentedControl;

@interface AWEFavoriteSubTabListContainerViewHolder : AWEBaseTabListViewHolder

@property (retain, nonatomic) AWEFavoriteSegmentedControl *segmentedControl;

- (void)setupViewHolder;
- (id)tabLockIconImage;
- (id)tabLockSelectedIconImage;
- (void)updateLayout;
- (void).cxx_destruct;

@end
