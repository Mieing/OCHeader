@class AVPlayerLayer;

@interface WCPlayerLayerView : UIView

@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) BOOL isPipScene;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(unsigned int)a1 isPipScene:(BOOL)a2;
- (BOOL)isReadyForDisplay;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)a0;
- (id)getPlayerLayer;
- (void)setPlayer:(id)a0;
- (void)layoutSubviews;
- (void)setVideoGravity:(id)a0;
- (void)resetView;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
