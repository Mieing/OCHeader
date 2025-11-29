@class UIView, DYLoginNextActionButton, UIImage, AWERegisterPageAgeAndGenderSelectCollectionViewCell, NSString, UIButton, NSMutableArray, UICollectionView, AWERegisterPageInfoCollectTopView, UILabel;

@interface AWEAgeGenderEditViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWERegisterPageInfoCollectTopView *topView;
@property (retain, nonatomic) UICollectionView *ageAndGenderSelectCollectionView;
@property (retain, nonatomic) DYLoginNextActionButton *finishButton;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) UILabel *birthdayTipsLabel;
@property (retain, nonatomic) UIView *birthdayView;
@property (retain, nonatomic) UILabel *birthdayLabel;
@property (retain, nonatomic) AWERegisterPageAgeAndGenderSelectCollectionViewCell *genderBorderCell;
@property (retain, nonatomic) AWERegisterPageAgeAndGenderSelectCollectionViewCell *birthdayBorderCell;
@property (retain, nonatomic) AWERegisterPageAgeAndGenderSelectCollectionViewCell *preBirthdayBorderCell;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) unsigned long long platform;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarURI;
@property (nonatomic) BOOL isProfileUpdate;
@property (nonatomic) BOOL updateUserProfile;
@property (retain, nonatomic) NSString *currentBirthdayString;
@property (nonatomic) BOOL isVerifySuccess;
@property (nonatomic) BOOL isShowRealNameVerifyVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserNewUserProfileEditAdapterProtocolClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)trackParams;
- (void)skipAction;
- (void)configDataSource;
- (void)publishAction;
- (id)finishButtonTitle;
- (void)finishAction;
- (void)configTopView;
- (void)updateButtonState;
- (void)didSyncCertificationStatus:(id)a0;
- (void)p_handleEditProfileVerificationSucceed:(BOOL)a0;
- (void)u14VerifyFaild;
- (id)trackClickParams:(id)a0;
- (void)showDatePickerIfNeeded:(long long)a0 currentBirthdayString:(id)a1;
- (long long)ageLevelWithType:(long long)a0;
- (long long)genderWithType:(long long)a0;
- (void)publishNewcomersVideo;
- (id)trackBioResultParams;
- (id)trackFinishParams;
- (void)showSelectBirthdayView;
- (id)trackBioSubPanelClick:(id)a0;
- (id)datePickerMinimumDate:(long long)a0;
- (id)datePickerMaximumDate:(long long)a0;
- (id)aAWEUserNewUserProfileEditAdapterProtocol;
- (id)trackBioSubPanelShow;
- (void)realNameVerifyIfNeeded;
- (void)birthdayViewAction;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (BOOL)isSmallScreen;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
