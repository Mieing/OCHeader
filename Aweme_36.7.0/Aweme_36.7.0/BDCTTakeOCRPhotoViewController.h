@class NSString, UIImageView, CAShapeLayer, UILabel, BDCTFlow, UIButton;

@interface BDCTTakeOCRPhotoViewController : BDCTTakePhotoBaseViewController <UITextViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPickerViewControllerDelegate>

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *cropFrameImageView;
@property (retain, nonatomic) UIImageView *cropInnerImageView;
@property (retain, nonatomic) UIButton *photoButton;
@property (retain, nonatomic) UILabel *bottomTipLabel;
@property (retain, nonatomic) UILabel *sideTipLabel;
@property (retain, nonatomic) UIButton *selectAlbumPhotoButton;
@property (nonatomic) int maxSide;
@property (nonatomic) double compressRatioWeb;
@property (nonatomic) double compressRatioNet;
@property (copy, nonatomic) NSString *orientation;
@property (copy, nonatomic) NSString *takePhotoTip;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerWithParams:(id)a0 completion:(id /* block */)a1;

- (void)takePhoto;
- (void)selectPhotoFromAlbum;
- (void)layoutPortraitViews;
- (void)quite;
- (void)handleSelectedImage:(id)a0 metaData:(id)a1 from:(id)a2;
- (id)rotateAndCropImage:(id)a0 withRectCorners:(id)a1;
- (id)getMaskPath;
- (id)createAttributedText;
- (id)compressImage:(id)a0 metaData:(id)a1;
- (void)finishTakeOCRWithDisplayImage:(id)a0 ocrResult:(id)a1;
- (void)showAlertWithTitle:(id)a0 message:(id)a1;
- (void)layoutViews;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)cancel;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (id)cropImage:(id)a0;

@end
