@class UILabel, AWEFavoriteFileDataController, AFDHoverableContainerView, AWEFavoriteFolderBaseInfoModel, UIButton, UIView, UIColor, NSString, DUXSwitch, UITextField, DUXLoadingToast, NSArray, NSNumber, UIImageView;

@interface AWEFavoriteAddNewFilePopupViewController : UIViewController

@property (retain, nonatomic) AFDHoverableContainerView *contentView;
@property (retain, nonatomic) UIButton *cancleButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *fileCoverImageView;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UILabel *publicHintLabel;
@property (nonatomic) BOOL isConfirmButtonValid;
@property (retain, nonatomic) AWEFavoriteFileDataController *favoriteFileDataController;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UILabel *publicLabel;
@property (retain, nonatomic) DUXSwitch *publicSwitch;
@property (copy, nonatomic) NSString *defaultTitle;
@property (copy, nonatomic) UIColor *confirmButtonColor;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *cutCoverUrl;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSArray *itemIDArray;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isChangeFileName;
@property (nonatomic) BOOL isFromFavoritePage;
@property (nonatomic) BOOL isFromFolder;
@property (nonatomic) BOOL isFromSnackBar;
@property (nonatomic) BOOL shouldBlockNoticeView;
@property (nonatomic) BOOL goToAddNewVideo;
@property (nonatomic) BOOL isFromLongPressMenu;
@property (nonatomic) BOOL isFromFavoriteRecommend;
@property (nonatomic) BOOL isFromRedFavoriteTramsferButton;
@property (copy, nonatomic) id /* block */ changeNameCallback;
@property (retain, nonatomic) NSNumber *collectsId;
@property (retain, nonatomic) NSString *toastType;
@property (nonatomic) BOOL isCreatingFavoriteFolder;
@property (nonatomic) BOOL needUseCombineRequest;
@property (copy, nonatomic) id /* block */ networkCompletionBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *collectionFolderModel;
@property (copy, nonatomic) id /* block */ endFavoriteAddNewFilePopupPromise;

+ (Class)aAWEBrandColorAdapterClass;

- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)cancelButtonClick;
- (id)aAWEBrandColorAdapter;
- (void)confirmButtonClick;
- (void)textFiledEditChanged:(id)a0;
- (BOOL)p_enableNewStyle;
- (BOOL)hasPublicSwitch;
- (double)popViewHeight;
- (void)favoriteNoticeViewShow;
- (unsigned long long)textLength:(id)a0;
- (unsigned long long)wordNumber:(id)a0;
- (void)changeRecommendFileName;
- (void)changeFileName;
- (void)addNewFilebyArray;
- (void)addNewFile;
- (void)configWithCoverUrl:(id)a0;
- (void)updateCoverUrl;
- (void)updateTextField:(id)a0;
- (void)updateCoverUrlWithNoRequest;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)updateLabelText;
- (void)setUpUI;

@end
