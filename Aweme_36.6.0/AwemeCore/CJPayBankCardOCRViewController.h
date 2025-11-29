@class NSString, UIImageView, UILabel, UIView, MASConstraint;

@interface CJPayBankCardOCRViewController : CJPayCardOCRViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

@property (retain, nonatomic) UIView *photoIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double ocrAppearTime;
@property (nonatomic) double albumAppearTime;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *errorImageView;
@property (retain, nonatomic) UILabel *errorTipsLabel;
@property (nonatomic) BOOL isRunningErrorTipsAnimation;
@property (nonatomic) double lastErrorTipsAnimationTime;
@property (nonatomic) BOOL errorTipsHasShowed;
@property (retain, nonatomic) MASConstraint *photoIconBottomConstraint;
@property (retain, nonatomic) MASConstraint *photoIconTopConstraint;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) unsigned long long callbackCount;
@property (nonatomic) BOOL isFirstSampleOutput;
@property (nonatomic) long long minLength;
@property (nonatomic) long long maxLength;
@property (copy, nonatomic) NSString *titleStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showImagePicker;
- (void)p_scanWithSelectPhotoImgData:(id)a0;
- (void)completionCallBackWithResult:(id)a0;
- (void)p_alertPhotoOCRFail:(id)a0;
- (void)alertTimeOut;
- (void)p_selectPhotoToOCR;
- (void)p_selectPhotoToOCRButton:(BOOL)a0;
- (id)p_buildBDPayCardOCRRequestParam:(id)a0;
- (BOOL)p_isSatisfyRuleWithCardNoStr:(id)a0;
- (void)trackResult:(id)a0;
- (void)p_superBack;
- (void)p_compressAndUploadImage:(id)a0;
- (void)p_scanWithImage:(id)a0;
- (void)p_showOCRErrorTips:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setupUI;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
