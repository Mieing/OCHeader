@class MMMusicRoundCorneredBarButton, UIImageView, UILabel, WCPlayerView;
@protocol MMMusicNoAnyVideoViewPlayerDelegate;

@interface MMMusicNoAnyVideoView : WCPlayerControlView {
    WCPlayerView *_playerView;
    UIImageView *_imageView;
    UILabel *_label;
    MMMusicRoundCorneredBarButton *m_postBarButton;
    unsigned int _nativeViewId;
}

@property (weak, nonatomic) id<MMMusicNoAnyVideoViewPlayerDelegate> delegate;
@property (nonatomic) unsigned long long videoEpisodeIndex;
@property (copy, nonatomic) id /* block */ onTappedBlock;

- (id)init;
- (void)setVideoEpisodeIndex:(unsigned long long)a0 shouldPlay:(BOOL)a1;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)destory;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setPromptAlpha:(double)a0;
- (void)setShowPromptText:(BOOL)a0;
- (void)onPlayerVideoFrameOut:(id)a0;
- (void)onVideoPrepareToPlay:(id)a0;
- (void)onVideoBeginPlay;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onVideoDidPlayToEndTime;
- (void)showBufferingView;
- (void)hiddenBufferingView;
- (void).cxx_destruct;

@end
