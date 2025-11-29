@class UIView, NSString, AWEFavoriteFileAddNewVideoBaseViewController, AWEFavoriteRecommendModel, UIImageView, UIButton, DUXSwitch, DUXButton, UILabel;

@interface AWEFavoriteRecommendSelectVideoViewController : UIViewController

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *titleName;
@property (retain, nonatomic) UIImageView *titleEditImgView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *privacySwitchLabel;
@property (retain, nonatomic) DUXSwitch *privacySwitch;
@property (retain, nonatomic) DUXButton *confirmButton;
@property (retain, nonatomic) AWEFavoriteFileAddNewVideoBaseViewController *selectVideoViewController;
@property (retain, nonatomic) AWEFavoriteRecommendModel *recommendModel;
@property (nonatomic) BOOL isSelectedVideo;
@property (nonatomic) BOOL hasClickConfirmButton;
@property (copy, nonatomic) id /* block */ createRecommendFavoriteSuccessCompletion;
@property (nonatomic) BOOL isFromFansTool;

- (void)didClickConfirmButton;
- (void)didClickCancelButton;
- (id)initWithTitle:(id)a0 recommendModel:(id)a1 successCompletion:(id /* block */)a2;
- (void)didClickEditTitleButton;
- (void)trackRecommendFavoriteCreateCancelButtonClick;
- (void)trackRecommendFavoriteCreateConfirmButtonClick;
- (void)goToFavoriteFileVideoViewControllerWithCollectsName:(id)a0 collectsId:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)show;
- (void)setupUI;

@end
