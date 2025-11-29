@class ACCAIGCLoraPersonInfo, NSString, NSArray, ACCAIGCSelectLoraInfoFooterCollectionReusableView, ACCAIGCMoreLoraInfoCollectionViewCell, ACCAIGCLoraProfileModel, NSDictionary, ACCAIGCSelectLoraInfoHeaderCollectionReusableView, UICollectionView, ACCAnimatedButton;

@interface ACCAIGCManagerSelectLoraInfoViewController : AWEHalfScreenSuperViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, ACCAIGCMoreLoraInfoCollectionViewCellDelegate>

@property (retain, nonatomic) ACCAnimatedButton *switchLoraInfoButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *selectLoraProfile;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *recordSelectLoraProfile;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) ACCAIGCMoreLoraInfoCollectionViewCell *singlepCell;
@property (retain, nonatomic) ACCAIGCSelectLoraInfoHeaderCollectionReusableView *selectHeaderView;
@property (retain, nonatomic) ACCAIGCSelectLoraInfoFooterCollectionReusableView *selectFooterView;
@property (nonatomic) BOOL hasHanldUpdateSelectInfo;
@property (copy, nonatomic) NSString *defaultLoraId;
@property (nonatomic) BOOL clickUseCurrentProfile;
@property (nonatomic) long long darkMode;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) id /* block */ afterDismissConfirmBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCellSize;
+ (long long)generalDataSourceCount;
+ (double)collectionHeight;

- (void)onThemeChanged;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)bindService;
- (void)sendClickTrackWith:(id)a0 isBack:(BOOL)a1;
- (void)refreshDataIfNeed:(BOOL)a0;
- (void)sendShowTrack;
- (void)clickUseLoraInfoAction;
- (void)onCloseViewControllerAction;
- (void)onJumpManagerLoraAction;
- (BOOL)canSupportScrollWithTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (unsigned long long)viewStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)layoutFrame;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)cornerRadius;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (double)containerHeight;
- (double)containerWidth;

@end
