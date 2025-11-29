@class UIImage, NSString, AWEButton, UIImageView, AWEInsightsShopCameraCornerView, UIView, YYLabel;

@interface AWEInsightsShopPhotoUploadViewController : UIViewController

@property (retain, nonatomic) YYLabel *linkLabel;
@property (retain, nonatomic) AWEButton *backBtn;
@property (retain, nonatomic) AWEButton *uploadBtn;
@property (retain, nonatomic) UIImageView *photoImageView;
@property (retain, nonatomic) UIImageView *centerBackgroundImageView;
@property (retain, nonatomic) AWEInsightsShopCameraCornerView *fourCornersView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *topMaskView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIImage *originImage;
@property (retain, nonatomic) NSString *linkURL;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *currentPage;
@property (retain, nonatomic) NSString *titleString;
@property (nonatomic) double rotateDegress;
@property (nonatomic) BOOL disableGallery;

- (void)backBtnClicked;
- (void)uploadImageData;
- (void)p_setupNaviBar;
- (void)openPhotoAlbum;
- (void)p_jumpToLinkURL;
- (void)p_trackClickPOIStoreClaim:(id)a0;
- (void)p_retakePhoto;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
