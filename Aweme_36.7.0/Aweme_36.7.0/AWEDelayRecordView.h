@class NSString, UIView, ACCButton, AWEAudioWaveformContainerView;

@interface AWEDelayRecordView : UIButton <ACCFullScreenPanelViewProtocol>

@property (retain, nonatomic) AWEAudioWaveformContainerView *audioWaveformContainerView;
@property (retain, nonatomic) ACCButton *delayRecordButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *clearView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void *)identifier;
- (BOOL)accessibilityViewIsModal;
- (id)panelName;

@end
