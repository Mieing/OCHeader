@class DVEMultipleTrackViewCellViewModel, CAShapeLayer;

@interface DVEAudioFadeInOutView : UIView

@property (weak, nonatomic) DVEMultipleTrackViewCellViewModel *waveModel;
@property (nonatomic) unsigned long long viewType;
@property (retain, nonatomic) CAShapeLayer *easeLayer;
@property (nonatomic) BOOL FadeInOutPathStyleBottom;

- (void)layoutForFadeIn;
- (void)layoutForFadeOut;
- (id)initWithWaveModel:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
