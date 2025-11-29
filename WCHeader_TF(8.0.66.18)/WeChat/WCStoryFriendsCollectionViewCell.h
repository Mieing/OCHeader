@class MMUILabel, NSMutableArray, UIImageView, WCStoryTimelineCellModel, MMUIButton, MMHeadImageView;

@interface WCStoryFriendsCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headerImageView;
@property (retain, nonatomic) MMUILabel *usernameLabel;
@property (retain, nonatomic) UIImageView *favourImageView;
@property (retain, nonatomic) MMUIButton *unreadCountButton;
@property (retain, nonatomic) NSMutableArray *storyHeadImageViewArray;
@property (retain, nonatomic) WCStoryTimelineCellModel *friendsCollectionViewCellModel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)prepareForReuse;
- (void)updateUnreadStoryHeadImageView:(id)a0;
- (id)createUnreadStoryHeadImageView;
- (void).cxx_destruct;

@end
