@class IESSoloKTVImageMetalView, IESSoloKTVMidiRender;

@interface IESSoloKTVMidiView : UIView

@property (retain, nonatomic) IESSoloKTVImageMetalView *mtkView;
@property (retain, nonatomic) IESSoloKTVMidiRender *midiRender;

- (double)currentPlayingTime;
- (void)updateConfig:(id)a0;
- (double)currentFps;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePlayingTime:(double)a0;
- (void)updateMidiScore:(id)a0;
- (double)midiViewHeight;
- (void)setPauseDraw:(BOOL)a0;
- (void)updateRecordDelayTime:(double)a0;
- (void)updateMidiModel:(id)a0 lyrics:(id)a1 autoStart:(BOOL)a2;
- (void)cleanUserRecord;
- (void)updateBlend:(BOOL)a0;
- (double)sentenceScore;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)clean;

@end
