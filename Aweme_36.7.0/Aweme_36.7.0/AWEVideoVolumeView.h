@class HTSVideoSoundEffectPanelView, NSString, UIView, ACCButton;

@interface AWEVideoVolumeView : UIView <ACCPanelViewProtocol>

@property (retain, nonatomic) HTSVideoSoundEffectPanelView *panelView;
@property (retain, nonatomic) ACCButton *buttonDone;
@property (retain, nonatomic) UIView *gestureTapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)panelViewHeight;
- (void)handleBlockPanGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void *)identifier;
- (id)panelName;

@end
