@class UIImage, DVEAudioWaveViewModel;

@interface DVEMultipleTrackTextStickerCellViewModel : DVEMultipleTrackViewCellViewModel

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) DVEAudioWaveViewModel *audioWaveViewModel;

- (id)initWithContext:(id)a0 segment:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 backgroundColor:(id)a3 title:(id)a4 icon:(id)a5 timeScale:(double)a6 iconImage:(id)a7 audioWaveViewModel:(id)a8;
- (void).cxx_destruct;

@end
