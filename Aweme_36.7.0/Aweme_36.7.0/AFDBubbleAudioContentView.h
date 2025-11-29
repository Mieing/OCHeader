@class ACFAudioContentView, ACFAudioStateView, MASConstraint, UITapGestureRecognizer;
@protocol AFDBubbleAudioContentViewDelegate;

@interface AFDBubbleAudioContentView : UIView

@property (retain, nonatomic) ACFAudioContentView *contentView;
@property (retain, nonatomic) ACFAudioStateView *stateView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) MASConstraint *contentViewWidthConstraint;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<AFDBubbleAudioContentViewDelegate> delegate;

- (void)refreshPlayAudioWithCurrentTime:(double)a0;
- (void)bubbleViewTapped:(id)a0;
- (void)configWithWaveArr:(id)a0 duration:(double)a1 state:(unsigned long long)a2;
- (void)updateBubbleAudioContentViewState:(unsigned long long)a0;
- (id)initWithIsBGColorWhite:(BOOL)a0;
- (void)configWithWave:(id)a0 duration:(double)a1 state:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
