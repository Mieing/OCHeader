@class NSString, UIImageView, NSDictionary, UILabel, UIView;

@interface CJPayIDCardProfileOCRViewController : CJPayCardOCRViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *photoIconImageView;
@property (nonatomic) double ocrAppearTime;
@property (nonatomic) double albumAppearTime;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *safeImageView;
@property (retain, nonatomic) UILabel *titleDescLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property unsigned long long result;
@property (nonatomic) BOOL isOCRPageShown;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) unsigned long long callbackCount;
@property (nonatomic) BOOL isFirstSampleOutput;
@property (nonatomic) long long minLength;
@property (nonatomic) long long maxLength;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *extParams;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showImagePicker;
- (void)p_scanWithSelectPhotoImgData:(id)a0;
- (void)completionCallBackWithResult:(id)a0;
- (void)p_alertPhotoOCRFail:(id)a0;
- (void)alertTimeOut;
- (void)switchFlashLight;
- (void)p_selectPhotoToOCR;
- (void)p_selectPhotoToOCRButton:(BOOL)a0;
- (id)p_buildBDPayCardOCRRequestParam:(id)a0;
- (void)superBack;
- (void)trackResult:(id)a0;
- (void)p_superBack;
- (void)p_scanWithImage:(id)a0;
- (void)p_startRequestWithImage:(id)a0 fromPhoto:(BOOL)a1;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setupUI;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
