@class UIStackView, DVEAudioWaveView, DVEAudioSegmentTag;

@interface DVEMultipleTrackCombinedAudioCell : DVEMultipleTrackViewCell

@property (retain, nonatomic) DVEAudioSegmentTag *titleTagView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) DVEAudioWaveView *waveView;
@property (nonatomic) BOOL isGeneratingAudioPoints;

- (void)updateUIIfNeeded;
- (void)setupWaveView;
- (void)clipPanChangedAtPosition:(unsigned long long)a0 offset:(double)a1;
- (void)updateTagStackView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewModel:(id)a0;
- (void)setupUI;
- (void)setupStackView;
- (void)updateFrame;
- (id)slots;

@end
