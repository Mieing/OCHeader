@class NSString, SightIconView;
@protocol WCSNSADPlayerControlViewDelegate;

@interface WCSNSADPlayerControlView : WCPlayerControlView <SightIconViewDelegate>

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) SightIconView *iconView;
@property (weak, nonatomic) id<WCSNSADPlayerControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0;
- (void)layoutSubviews;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)onVideoPlayFinish;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onPlayerCreated;
- (void)onPlayerSeekCompelete:(double)a0;
- (void)showBufferingView;
- (void)showDownloadPercentView;
- (void)showPauseView;
- (void)hidePauseView;
- (void)hideIconView;
- (void).cxx_destruct;

@end
