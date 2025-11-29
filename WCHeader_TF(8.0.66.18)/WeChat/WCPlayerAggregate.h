@class WCPlayerPlayArgs, WCPlayerPlaybackInfo, WCPlayerReporter, WCPlayerView;

@interface WCPlayerAggregate : NSObject

@property (weak, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCPlayerReporter *reporter;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) WCPlayerPlaybackInfo *playbackInfo;

- (void).cxx_destruct;

@end
