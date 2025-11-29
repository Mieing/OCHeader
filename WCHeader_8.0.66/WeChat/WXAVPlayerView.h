@class AVPlayer, AVPlayerLayer;

@interface WXAVPlayerView : UIView

@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

+ (Class)layerClass;

@end
