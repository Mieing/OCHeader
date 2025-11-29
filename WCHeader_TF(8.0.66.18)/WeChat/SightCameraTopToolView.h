@class UIButton, MMTimer, MMUIButton, WCFinderEditImageMusicView, RecommendedMusicInfo;

@interface SightCameraTopToolView : UIView

@property (nonatomic) long long orientation;
@property (nonatomic) unsigned long long toolItems;
@property (retain, nonatomic) MMTimer *throttle;
@property (retain, nonatomic) WCFinderEditImageMusicView *musicBGMView;
@property (retain, nonatomic) RecommendedMusicInfo *patMusicInfo;
@property (nonatomic) BOOL canRelayoutSubviews;
@property (copy, nonatomic) id /* block */ switchCameraBlock;
@property (copy, nonatomic) id /* block */ closeButtonBlock;
@property (nonatomic) long long flashMode;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) MMUIButton *cameraSwitchButton;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) long long viewStyle;

+ (long long)flashModeWithToolFlashMode:(long long)a0;
+ (long long)torchModeWithToolFlashMode:(long long)a0;

- (void)rotateToOrientation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toolItems:(unsigned long long)a1 patMusicInfo:(id)a2 canRelayoutSubviews:(BOOL)a3 viewStyle:(long long)a4;
- (void)setupView;
- (void)layoutSubviews;
- (void)forceRelayoutSubviews;
- (void)_relayoutViews;
- (void)updateMusicBGMViewDuration:(id)a0;
- (void)updateCameraAccessibility;
- (void)onCloseButtonClicked;
- (void)switchCamera;
- (void)realSwitchCamera;
- (void).cxx_destruct;

@end
