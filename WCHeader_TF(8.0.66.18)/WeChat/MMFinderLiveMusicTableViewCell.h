@class MMFinderLiveMusicDataItem, PAGView, MMUIView, MMWebImageView, UIImageView, MMUILabel;
@protocol MMFinderLiveMusicTableViewCellDelegate;

@interface MMFinderLiveMusicTableViewCell : MMFinderLiveMultiSelectTableViewCell

@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUILabel *musicNameLabel;
@property (retain, nonatomic) MMUILabel *musicAnchorLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) PAGView *playingAnimatedView;
@property (retain, nonatomic) MMUIView *playingAnimatedBgView;
@property (retain, nonatomic) UIImageView *playingStateImg;
@property (retain, nonatomic) MMFinderLiveMusicDataItem *musicDataItem;
@property (weak, nonatomic) id<MMFinderLiveMusicTableViewCellDelegate> musicTableCellDelegate;

+ (double)preferHeight;
+ (double)preferLabelLeft;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCoverImageView;
- (void)layoutMusicNameLabel;
- (void)layoutMusicAnchorLabel;
- (void)layoutDurationLabel;
- (void)layoutPlayingIconView;
- (void)layoutPlayingStateImg;
- (void)refreshUI;
- (void)onTapGesture:(id)a0;
- (void)refreshContents;
- (void)updatePlayingAnimatedViewState;
- (void)playPlayingAnimatedView;
- (void)stopPlayingAnimatedView;
- (void)pausePlayingAnimatedView;
- (void)createPlayingAnimatedView;
- (void)updatePlayingStateImg;
- (double)adjustedLeftOffsetForEditing;
- (double)selectedButtonLeftMargin;
- (void)customReorderImage:(id)a0;
- (void).cxx_destruct;

@end
