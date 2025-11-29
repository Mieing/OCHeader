@class UILabel, UIImageView, CJPayButton;

@interface CJPayPassportOCRViewController : CJPayCardOCRViewController

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *profilePicImageView;
@property (retain, nonatomic) UIImageView *bottomAlignImageView;
@property (retain, nonatomic) CJPayButton *takePhotoButton;
@property (nonatomic) BOOL needCaptureNow;
@property (nonatomic) unsigned long long compressSize;

- (void)p_trackWithEventName:(id)a0 param:(id)a1;
- (void)p_uploadPhotoWithImageData:(id)a0;
- (void)p_onTakePhotoButtonClick;
- (void).cxx_destruct;
- (id)init;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)viewDidLoad;
- (void)setupUI;

@end
