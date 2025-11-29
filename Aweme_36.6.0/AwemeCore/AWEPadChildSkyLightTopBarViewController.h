@class UIView, NSString, DUXContentSheet, UIImageView, UIButton, MMKV, AWEPadChildSkyLightTopBarViewModel, UICollectionView, AWEPadAgePickerViewController, AWEPadAgePickerViewModel, NSNumber;

@interface AWEPadChildSkyLightTopBarViewController : UIViewController <UIScrollViewDelegate, DUXSheetDelegate, AWEUserMessage>

@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIView *rightContainerView;
@property (retain, nonatomic) UIImageView *parentManageView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) UIImageView *backgroundImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) AWEPadAgePickerViewModel *agePickerViewModel;
@property (retain, nonatomic) DUXContentSheet *sheet;
@property (copy, nonatomic) NSString *childBirthDay;
@property (retain, nonatomic) UIButton *ageButton;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSString *enterMethodForPicker;
@property (nonatomic) BOOL justFinishLogin;
@property (weak, nonatomic) AWEPadChildSkyLightTopBarViewModel *childViewModel;
@property (retain, nonatomic) AWEPadAgePickerViewController *agePickerViewController;
@property (retain, nonatomic) NSNumber *childGender;
@property (retain, nonatomic) NSNumber *childAge;
@property (copy, nonatomic) id /* block */ commitAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)willStartLogin;
- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)initFetch;
- (void)setupListAdapter;
- (void)fetchChildInfoAndUpdateView;
- (void)receiveRefreshNoti:(id)a0;
- (void)shouldUpdateChildInfoWhenAppear;
- (void)updateManageImageView;
- (void)fetchChildInfoWithCompletion:(id /* block */)a0;
- (void)showAgePickerWithMethod:(id)a0;
- (void)showAgePickerIfNeed;
- (void)updateChildInfoCacheWithAge:(id)a0 Gender:(id)a1;
- (void)updateManageImageViewWithGender:(id)a0 Birthday:(id)a1;
- (BOOL)isChildChannel;
- (void)moreButtonAction:(id)a0;
- (void)tapParentManageView:(id)a0;
- (void)submitAgeAndGender;
- (id)childInfoFromCacheWithKey:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;

@end
