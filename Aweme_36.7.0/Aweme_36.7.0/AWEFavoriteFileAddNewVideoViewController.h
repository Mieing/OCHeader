@class AWEFavoriteFileAddNewVideoBaseViewController, UIView, NSString, UINavigationController, UIButton, AFDHoverableContainerView, DUXLoadingToast, UIViewController, UILabel, NSNumber;

@interface AWEFavoriteFileAddNewVideoViewController : UIViewController

@property (retain, nonatomic) AFDHoverableContainerView *contentView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *cancleButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *addVideoLabel;
@property (retain, nonatomic) AWEFavoriteFileAddNewVideoBaseViewController *fileAddNewVideoBaseViewController;
@property (nonatomic) BOOL isDidSelectVideo;
@property (nonatomic) BOOL canButtonClick;
@property (nonatomic) BOOL shouldRefreshData;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL hasClickconfirmButton;
@property (retain, nonatomic) NSNumber *collectsId;
@property (retain, nonatomic) NSString *collectsName;
@property (retain, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) UINavigationController *addNewVideoNavigationController;
@property (retain, nonatomic) UIViewController *topViewController;
@property (nonatomic) BOOL isHideBottomBar;
@property (retain, nonatomic) NSString *clickPosition;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)cancelButtonClick;
- (void)confirmButtonClick;
- (void)favoriteItemChanged:(id)a0;
- (id)initWithCollectsId:(id)a0 withCollectsName:(id)a1 withCoverUrl:(id)a2;
- (void)undoBottomBar;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setUpUI;

@end
