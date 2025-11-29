@class WCFinderHeadImageView;

@interface MMFinderLiveKTVSongQueueCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;

+ (id)cellIdentifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)updateWithLiveContact:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
