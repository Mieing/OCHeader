@class AWEMusicSongWaveView, UIImageView, LOTAnimationView, UILabel, AWEMusicFeedViewModel, UIButton;
@protocol AWEMusicQueueListCellDelegate;

@interface AWEMusicQueueListCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *deleteView;
@property (retain, nonatomic) LOTAnimationView *songwaveAnimationView;
@property (retain, nonatomic) AWEMusicSongWaveView *songWaveView;
@property (retain, nonatomic) AWEMusicFeedViewModel *model;
@property (retain, nonatomic) UIButton *deleteButton;
@property (weak, nonatomic) id<AWEMusicQueueListCellDelegate> delegate;

- (void)showHighlightViewIsPlaying:(BOOL)a0;
- (void)showIdleView;
- (void)deleteTapped:(id)a0;
- (void)deleteTapped_IMP:(id)a0;
- (void)configWithModel:(id)a0 isHighlight:(BOOL)a1 isPlaying:(BOOL)a2;
- (id)artistName;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
