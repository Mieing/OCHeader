@class ACCImageView, NSTimer, UIImage, NSString, UIImageView, UIControl, UIButton, CAGradientLayer, NSMutableSet, UIProgressView, UILabel;
@protocol ACCCameraService, ACCRecorderViewContainer, ACCSelfieImageProcessAndUploadProtocol;

@interface ACCSelfieEmojiRecordControlComponent : ACCFeatureComponent <ACCAlgorithmEvent, ACCCameraLifeCircleEvent, ACCSelfieCloseComponentService>

@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCSelfieImageProcessAndUploadProtocol> imageProcesser;
@property (retain, nonatomic) ACCImageView *faceImageView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *recordBtn;
@property (retain, nonatomic) UIButton *usePhotoBtn;
@property (retain, nonatomic) UIControl *backControl;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) UIProgressView *progressLine;
@property (retain, nonatomic) UILabel *generatingLabel;
@property (nonatomic) unsigned long long currentPageStage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } correctFaceAreaFrameRect;
@property (retain, nonatomic) NSMutableSet *tipsLabelTextSet;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) UIImage *photo;
@property (nonatomic) BOOL didClickShoot;
@property (nonatomic) BOOL fakeProgressCompleted;
@property (nonatomic) BOOL isDidEnterBackground;
@property (nonatomic) unsigned long long generateState;
@property (nonatomic) BOOL isGenerating;
@property (retain, nonatomic) NSTimer *waitingTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)onExternalAlgorithmCallback:(id)a0 type:(unsigned long long)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBindingArray;
- (void)bindServices:(id)a0;
- (void)didClickCloseBtn:(id)a0;
- (void)p_stopWaitingTimer;
- (void)p_restoreLastStatusIfNeeded;
- (void)useThisImageAction:(id)a0;
- (void)p_enterBackground:(id)a0;
- (void)p_enterForeground:(id)a0;
- (void)p_addGradient;
- (void)recordBtnDidClick:(id)a0;
- (void)retryAction:(id)a0;
- (void)updateCurrentTipLable:(long long)a0;
- (void)removeCurrentTipLable:(long long)a0;
- (void)p_startWaitingTimer;
- (void)fetchEmojiList;
- (void)doFakeProgressAnimationComplete:(id /* block */)a0;
- (void).cxx_destruct;
- (void)takePicture;
- (void)setupUI;
- (void)p_addObservers;

@end
