@class UIView, NSString, AWEMemoriesPlayerContext, AVPlayerItem, AWEMemoriesPlayerTileModel, UIImageView, ACCEditSingleVideoPlayControlView, AWELoadingAndVolumeView, AVPlayerLayer, AVPlayer;
@protocol AWEMemoriesLocalVideoCellDelegate;

@interface AWEMemoriesLocalVideoCell : UICollectionViewCell <AFDMuteAwemeMessage, ACCEditPlayControlViewDelegate>

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *playerContainer;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) int iCloudRequestIdentifier;
@property (retain, nonatomic) AWELoadingAndVolumeView *loadAndVolumeView;
@property (retain, nonatomic) ACCEditSingleVideoPlayControlView *playControlView;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (nonatomic) double currentTotalDuration;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;
@property (weak, nonatomic) id<AWEMemoriesLocalVideoCellDelegate> playerDelegate;
@property (weak, nonatomic) AWEMemoriesPlayerContext *playerContext;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)muteAwemeCanceled;
- (void)endDisplay;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)p_setupPlayControlView;
- (void)updatePlayControlDurationIfNeeded:(double)a0;
- (void)playWithAVAsset:(id)a0;
- (void)p_playerDidFinish;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
