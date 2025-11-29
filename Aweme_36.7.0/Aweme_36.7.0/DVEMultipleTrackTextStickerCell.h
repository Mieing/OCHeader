@class DVEAudioWaveView;

@interface DVEMultipleTrackTextStickerCell : DVEMultipleTrackViewCell

@property (nonatomic) BOOL isGeneratingAudioPoints;
@property (retain, nonatomic) DVEAudioWaveView *waveView;

- (void)updateUIIfNeeded;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupUI;

@end
