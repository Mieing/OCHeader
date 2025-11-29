@class UIButton, UIImageView;
@protocol RingToneToolActionResponder;

@interface RingToneToolView : UIStackView

@property (retain, nonatomic) UIButton *cropButton;
@property (retain, nonatomic) UIButton *switchButton;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIImageView *musicDancingView;
@property (weak, nonatomic) id<RingToneToolActionResponder> responder;
@property (nonatomic) BOOL isPlaying;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)config;
- (void)initView;
- (void)addMorebutton;
- (void)initMusicDanceingView;
- (void)dancingMusicView:(BOOL)a0 type:(unsigned long long)a1;
- (void)updatePlayerMode:(unsigned long long)a0;
- (void)initiativeTriggerPlay;
- (void)setRingPlayButtonEnabled:(BOOL)a0;
- (void)onPlayButtonTap;
- (void)onMoreButtonTap;
- (void).cxx_destruct;

@end
