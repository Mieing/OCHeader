@class NSString, AVPlayer;

@interface TAVMediaPlayerView : UIView <TAVMediaViewProtocol>

@property (weak, nonatomic) AVPlayer *player;
@property (nonatomic) unsigned long long fillMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoRect;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL shouldAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)updateLayerFillMode;
- (void)refreshView;
- (void).cxx_destruct;

@end
