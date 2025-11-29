@class MMMusicSlider, MMTimer, NSString, UIColor, MMUILabel;

@interface MMMusicSliderControlView : UIView <IMusicPlayerExt>

@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;
@property (retain, nonatomic) MMTimer *musicProgressTimer;
@property (copy, nonatomic) NSString *curMusicID;
@property (retain, nonatomic) MMMusicSlider *slider;
@property (retain, nonatomic) UIColor *frontgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 frontgroundColor:(id)a2;
- (void)initView;
- (void)updateMusicProgress;
- (void)startMusicProgressTimer;
- (void)stopMusicProgressTimer;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)onSliderScrubbEnd;
- (void)updateTotalTimeLabel;
- (void)updateSlider:(id)a0;
- (void)onMusicPlayStatusChanged;
- (BOOL)isMusicEmpty;
- (void).cxx_destruct;

@end
