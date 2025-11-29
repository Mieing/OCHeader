@class BDCTAlbumPhotoPicker, UIImageView, NSString, UILabel, UIView, UIButton;

@interface BDCTTakePhotoViewController : BDCTTakePhotoBaseViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIImageView *cropFrameImageView;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *photoButton;
@property (retain, nonatomic) UIButton *flashButton;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *backButton;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropRect;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *albumButton;
@property (retain, nonatomic) UIButton *cameraSwitchButton;
@property (retain, nonatomic) BDCTAlbumPhotoPicker *albumPicker;
@property (copy, nonatomic) NSString *orientation;
@property (copy, nonatomic) NSString *takePhotoTitle;
@property (copy, nonatomic) NSString *guideDesc;
@property (retain, nonatomic) UIImageView *cropRectInnerImageView;
@property (retain, nonatomic) UIImageView *passpoortInnerLineImageView;
@property (nonatomic) BOOL showAlbumEntry;
@property (nonatomic) BOOL showCameraSwitcher;
@property (nonatomic) BOOL hideMask;
@property (nonatomic) BOOL isflashOn;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)takePhotoForType:(id)a0 params:(id)a1 fromFlow:(id)a2 completion:(id /* block */)a3;

- (void)takePhoto;
- (void)FlashOn;
- (void)selectePhotoFromAlbum;
- (void)handleCapturedImage:(id)a0 metaData:(id)a1;
- (BOOL)p_isPortrait;
- (void)trackClickActionWithButtonType:(id)a0;
- (void)layoutViews;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (void)cancel;
- (id)cropImage:(id)a0;

@end
