@class ACCButton, UIView, NSString, ACCRecordCountDownPlusViewModel, AWEDelayRecordPanelHeaderView, AWEDelayRecordPanelWaveformView;

@interface AWEDelayRecordConfigPanelView : UIButton <ACCFullScreenPanelViewProtocol>

@property (weak, nonatomic) ACCRecordCountDownPlusViewModel *countdownViewModel;
@property (retain, nonatomic) AWEDelayRecordPanelHeaderView *headerView;
@property (retain, nonatomic) AWEDelayRecordPanelWaveformView *waveformView;
@property (retain, nonatomic) ACCButton *delayRecordButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *clearView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (double)panelContentViewHeight;
- (void)updateContentHeight:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)setupContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)topRoundCornerShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addBlurEffect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelectedRecordMode:(long long)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void *)identifier;
- (BOOL)accessibilityViewIsModal;
- (id)panelName;

@end
