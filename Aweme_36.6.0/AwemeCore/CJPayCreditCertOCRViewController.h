@class NSString, NSDictionary, UILabel, UIView, UIButton;

@interface CJPayCreditCertOCRViewController : CJPayCardOCRViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, CJPayPhotoViewControllerDelegate>

@property (nonatomic) double lastErrorTipsTime;
@property (copy, nonatomic) NSString *lastOCRErrorCode;
@property (nonatomic) BOOL needCaptureNow;
@property (nonatomic) long long lastPageType;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIView *bottomGradientLayerView;
@property (retain, nonatomic) UIButton *uploadPhotoButton;
@property (retain, nonatomic) UIButton *scanCertButton;
@property (retain, nonatomic) UIButton *takePhotoButton;
@property (retain, nonatomic) UIButton *captureButton;
@property (retain, nonatomic) UIButton *captureInnerButton;
@property (retain, nonatomic) NSString *ocrURL;
@property (retain, nonatomic) NSString *certName;
@property (nonatomic) long long pageType;
@property (nonatomic) long long photoCompressSize;
@property (nonatomic) long long ocrCompressSize;
@property (retain, nonatomic) NSDictionary *extParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showImagePicker;
- (void)startSessionAndScan:(BOOL)a0;
- (void)alertTimeOut;
- (void)p_selectPhotoToOCR;
- (void)p_addMask;
- (void)p_superBack;
- (void)p_updateUIWithPageType:(long long)a0;
- (void)p_showOCRTipsWithMsg:(id)a0 ocrErrorCode:(id)a1;
- (id)p_buildCreditCertOCRRequestParam:(id)a0 ocrType:(unsigned long long)a1;
- (void)p_alertPhotoOCRFail:(id)a0 ocrType:(unsigned long long)a1;
- (void)p_scanWithPhotoImgData:(id)a0 ocrType:(unsigned long long)a1;
- (void)p_scanWithOCRImageData:(id)a0;
- (void)uploadPhotoButtonOnClick:(id)a0;
- (void)scanCertButtonOnClick:(id)a0;
- (void)takePhotoButtonOnClick:(id)a0;
- (void)captureButtonOnClick:(id)a0;
- (void)didPhotoCancelled:(id)a0;
- (void)didPhotoSelected:(id)a0;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)setupUI;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
