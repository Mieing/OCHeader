@class NSString, UIImageView, IESLLCardOCRGuideInfoView, UIView, UILabel, UIButton;
@protocol IESLLLoadingToastInterface, IESLLHttpTask;

@interface IESLLCardOCRViewController : IESLLOCRBaseViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIButton *questionBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIView *bottomContainerView;
@property (retain, nonatomic) UIView *flashLightView;
@property (retain, nonatomic) UIImageView *flashLightImageView;
@property (retain, nonatomic) UILabel *flashLightLabel;
@property (retain, nonatomic) UIImageView *cameraView;
@property (retain, nonatomic) UIView *albumView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) IESLLCardOCRGuideInfoView *guideInfoView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIButton *cameraAuthorityBtn;
@property (retain, nonatomic) UIView<IESLLLoadingToastInterface> *loadingToast;
@property (nonatomic) double lastScanTime;
@property (retain, nonatomic) id<IESLLHttpTask> task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAlbumImageIfNeeds;
- (void)p_turnFlashLight:(BOOL)a0;
- (void)p_showImagePicker;
- (void)p_scanWithSelectPhotoImgData:(id)a0;
- (id)cutContentImage:(id)a0;
- (void)p_startRequestWithImage:(id)a0 mode:(unsigned long long)a1;
- (id)p_buildCardOCRRequestParam:(id)a0;
- (void)p_alertPhotoOCRFail:(id)a0;
- (void)startScanWithParams:(id)a0 completion:(id /* block */)a1;
- (void)alertTimeOut;
- (void)didClickedQuestionBtn;
- (void)didClickedCloseBtn;
- (void)didClickedCameraAuthorityBtn;
- (void)switchFlashLight;
- (void)didClickedCameraView;
- (void)p_selectPhotoToOCR;
- (void)stopScan;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setupUI;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
