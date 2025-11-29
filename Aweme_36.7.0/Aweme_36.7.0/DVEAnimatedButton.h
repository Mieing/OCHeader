@class AVAudioPlayer, NSValue;

@interface DVEAnimatedButton : UIButton

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) NSValue *transformBeforeAnimation;
@property (nonatomic) double animationDuration;
@property (nonatomic) double highlightedScale;
@property (nonatomic) BOOL downgrade;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
