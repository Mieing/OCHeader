@class UIVisualEffectView, UIView;

@interface VoipMinimizeView : MultitalkMinimizeView

@property (retain, nonatomic) UIView *m_tipsMaskView;
@property (retain, nonatomic) UIVisualEffectView *captureVisualEffectView;
@property (nonatomic) double minimizeViewIconSize;
@property (nonatomic) BOOL isAudioMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateSubviewsByFrameMode;
- (void)layoutBlurVideoView;
- (void)updateSubviewsByDescMode;
- (id)timerLabelTextColor;
- (id)normalDescTextColor;
- (id)endingDescTextColor;
- (void)reset;
- (void).cxx_destruct;

@end
