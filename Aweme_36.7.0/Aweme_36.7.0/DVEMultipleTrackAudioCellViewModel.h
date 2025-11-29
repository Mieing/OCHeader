@class NSString, DVEAudioWaveViewModel;

@interface DVEMultipleTrackAudioCellViewModel : DVEMultipleTrackViewCellViewModel

@property (retain, nonatomic) DVEAudioWaveViewModel *audioWaveViewModel;
@property (retain, nonatomic) NSString *filterSegIconTitle;
@property (retain, nonatomic) NSString *filterSegIcon;

- (id)initWithContext:(id)a0 segment:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 backgroundColor:(id)a3 title:(id)a4 icon:(id)a5 filterSegIconTitle:(id)a6 timeScale:(double)a7 audioWaveViewModel:(id)a8;
- (void).cxx_destruct;
- (void)setSegment:(id)a0;

@end
