@class WCPlayerPlayArgs, NSString, UILongPressGestureRecognizer, WCPlayerImagePlayerViewController, UIView, WCPlayerView;
@protocol WCPlayableImageViewDelegate;

@interface WCPlayableImageView : UIImageView <WCPlayerImagePlayerViewControllerDelegate, WCPlayerPlaybackInfoDelegate> {
    UILongPressGestureRecognizer *_playingLongPressGestureRecognizer;
}

@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCPlayerImagePlayerViewController *playerController;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (readonly, nonatomic) UIView *playerContainerView;
@property (weak, nonatomic) id<WCPlayableImageViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long playerState;
@property (copy, nonatomic) id /* block */ playerStateDidChange;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL shouldPlayFromBeginning;
@property (nonatomic) BOOL playGestureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playerArgs:(id)a1;
- (id)initWithImage:(id)a0 playerArgs:(id)a1;
- (void)_init;
- (void)dealloc;
- (void)setContentMode:(long long)a0;
- (void)setImage:(id)a0;
- (void)_loadPlayerContainerView;
- (void)_loadPlayerViewIfPossible;
- (long long)viewContentModeFromPlayerContentMode:(long long)a0;
- (long long)viewContentModeFromPlayerArgs:(id)a0;
- (void)startPlaying;
- (void)pausePlaying;
- (BOOL)isCurrentPlaying;
- (void)seekVideoToBeginning;
- (BOOL)changeToDownloadFirstMode;
- (void)clearPlayer;
- (void)onPlayerStateChange:(unsigned long long)a0;
- (void)onPlayerProcessChange:(unsigned long long)a0;
- (void)onControllerVideoDidPlayToEndTime;
- (void)updateControllerVideoCurrentTime:(double)a0;
- (void)_initPlayingLongPressGestureRecognizerIfNeeded;
- (void)_handlePlayingLongPressGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
