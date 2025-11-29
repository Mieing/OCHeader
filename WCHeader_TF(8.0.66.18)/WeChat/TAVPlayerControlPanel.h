@class UIButton, NSString, UILabel, UISlider, UIView;
@protocol TAVPlayerControlPanelDelegate;

@interface TAVPlayerControlPanel : UIControl <TAVPlayerControlPanel>

@property (nonatomic) unsigned long long timeStyle;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UISlider *progressSlider;
@property (retain, nonatomic) UIButton *playButton;
@property (weak, nonatomic) id<TAVPlayerControlPanelDelegate> delegate;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } progress;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)didStartDragging;
- (void)didChangeTime:(id)a0;
- (void)didEndDragging;
- (void)playAction;
- (void)handleTapRecognizer:(id)a0;
- (id)imageWithName:(id)a0;
- (id)playbackFormatter:(double)a0;
- (void)updateTimeStyle;
- (void).cxx_destruct;

@end
