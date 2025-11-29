@class BDImageView, NSMutableDictionary, ACCBarItem, UIView, AWEVideoPublishViewModel, UIButton;
@protocol ACCRecorderViewContainer, IESServiceProvider;

@interface ACCAIGCLoraCameraView : ACCPassThroughView

@property (retain, nonatomic) UIView *customContainerView;
@property (weak, nonatomic) UIView *fakeCameraView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *precentOfTotalCount;
@property (retain, nonatomic) UIButton *captureHintLabel;
@property (retain, nonatomic) BDImageView *faceScanIcon;
@property (retain, nonatomic) UIButton *centerCaptureButton;
@property (retain, nonatomic) UIButton *leftHadCaptureButton;
@property (retain, nonatomic) UIButton *rightSwapButton;
@property (weak, nonatomic) ACCBarItem *cameraFlashView;
@property (nonatomic) long long lastStatus;
@property (nonatomic) long long currentStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previewFrame;
@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) NSMutableDictionary *processForShowImageInfo;
@property (copy, nonatomic) id /* block */ tapCloseLoraCapture;
@property (copy, nonatomic) id /* block */ tapConfirmBtn;
@property (copy, nonatomic) id /* block */ tapCaptureButton;
@property (copy, nonatomic) id /* block */ tapToShowHadCaptureImage;
@property (copy, nonatomic) id /* block */ tapSwapCameraButton;

- (void)bindService;
- (void)updateUILayout;
- (void)addSubview;
- (id)getCaptureShowIconUrl:(id)a0;
- (id)typeControlViewHideList;
- (id)totalActionButtonList;
- (void)updateTopAndBottomUIStatus:(unsigned long long)a0;
- (void)resetBeginStatus;
- (void)updateTopPrecentLabelWith:(unsigned long long)a0;
- (void)updateLeftButtonNeedReset:(BOOL)a0;
- (id)getCaptureHintLabelText:(id)a0;
- (void)updateCaptureFaceIcon:(unsigned long long)a0;
- (void)tapBackUpArrow;
- (void)tapConfirmBtnToCheckAssetsPage;
- (void)tapToCaptureButton;
- (void)tapLeftButtonToShowHadCaptureImage;
- (void)tapToSwapCameraButton;
- (id)initWithCameraPreview:(id)a0;
- (void)updateCurrentStatusWith:(long long)a0 index:(id)a1;
- (void).cxx_destruct;

@end
