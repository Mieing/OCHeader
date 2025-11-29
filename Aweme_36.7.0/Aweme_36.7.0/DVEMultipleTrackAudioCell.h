@class UIStackView, DVEAudioAddPlaceholderView, NSString, DVEAudioSegmentTag, DVEAudioFadeInOutView, DVEAudioWaveView;

@interface DVEMultipleTrackAudioCell : DVEMultipleTrackViewCell <DVECoreActionDelegate, NLENodeCallbackProtocol>

@property (retain, nonatomic) DVEAudioFadeInOutView *fadeInView;
@property (retain, nonatomic) DVEAudioFadeInOutView *fadeOutView;
@property (retain, nonatomic) DVEAudioSegmentTag *titleTagView;
@property (retain, nonatomic) DVEAudioSegmentTag *speedTagView;
@property (retain, nonatomic) DVEAudioSegmentTag *filterTagView;
@property (retain, nonatomic) DVEAudioSegmentTag *muteTagView;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL isGeneratingAudioPoints;
@property (retain, nonatomic) DVEAudioWaveView *waveView;
@property (retain, nonatomic) DVEAudioAddPlaceholderView *addPlaceholderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIIfNeeded;
- (void)nleNodeChanged:(id)a0;
- (void)nleEditorDidChange;
- (void)showAddPlaceholderView;
- (void)setupWaveView;
- (void)hideAddPlaceholderView;
- (void)updateSpeedTagView;
- (void)updateMuteTagView;
- (void)clipPanChangedAtPosition:(unsigned long long)a0 offset:(double)a1;
- (void)updateTagStackView;
- (void)updateFadeInOutView;
- (void)setupSpeedTagView;
- (void)setupMuteTagView;
- (void)setupFilterTagView;
- (void)setupMaskTitleLabel;
- (id)slot;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setViewModel:(id)a0;
- (void)setupUI;
- (void)setupStackView;
- (void)updateFrame;

@end
