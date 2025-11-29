@class UIView;
@protocol IESVideoPlayerProtocol;

@interface AWELivePhotoPlayerDelegate : NSObject <AFDClipLivePhotoPlayerAdapterProtocol, AFDClipVideoLikePlayerAdapterProtocol> {
    void /* unknown type, empty encoding */ livePhotoPlayer;
    void /* unknown type, empty encoding */ livePhotoCellModel;
    void /* unknown type, empty encoding */ livePhotoCellConfig;
}

@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic, readonly) id<IESVideoPlayerProtocol> playerController;
@property (nonatomic, weak) UIView *containerView;
@property (nonatomic, copy) id /* block */ didReadyBlock;

- (void)updateLivePhoto:(id)a0 albumImage:(id)a1 useOldPlayMode:(BOOL)a2 playMode:(unsigned long long)a3 mute:(BOOL)a4;
- (void)updateLivePhoto:(id)a0 albumImage:(id)a1 repeated:(BOOL)a2 useOldPlayMode:(BOOL)a3 playMode:(unsigned long long)a4 mute:(BOOL)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateLivePhotoScaleModeIsInFullPage:(BOOL)a0 albumContentMode:(unsigned long long)a1;
- (void)updateWithAnotherPlayer:(id)a0;
- (void)updateWithAnotherPlayer:(id)a0 repeated:(BOOL)a1;
- (void)updatePlaybackRate:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (id)player;

@end
