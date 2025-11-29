@class NSString, NSArray, UICollectionView, NSMutableDictionary, UILabel, UIView, UIButton;
@protocol AWEComposerBeautyTopBarViewControllerDelegate, ACCBeautyUIConfigProtocol;

@interface AWEComposerBeautyTopBarViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *collectionViewContainerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *detailTitleContainerView;
@property (retain, nonatomic) UIView *subDetailTitleContainerView;
@property (retain, nonatomic) UILabel *detailTitleLabel;
@property (retain, nonatomic) UILabel *subDetailTitleLabel;
@property (retain, nonatomic) UIButton *resetButton;
@property (copy, nonatomic) NSArray *titles;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) double animationOffset;
@property (nonatomic) double animationDuration;
@property (nonatomic) double resetButtonWidth;
@property (nonatomic) BOOL detailTitleContainerDisplayed;
@property (retain, nonatomic) NSMutableDictionary *flagDotShowConfig;
@property (retain, nonatomic) id<ACCBeautyUIConfigProtocol> uiConfig;
@property (weak, nonatomic) id<AWEComposerBeautyTopBarViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIButton *backButton;
@property (nonatomic) double itemHeight;
@property (nonatomic) BOOL hideResetButton;
@property (nonatomic) BOOL autoAlignCenter;
@property (nonatomic) BOOL hideSelectUnderline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIConfig:(id)a0;
- (double)p_rightInset;
- (void)p_handleBack;
- (void)updateWithTitles:(id)a0;
- (void)setResetButtonHidden:(BOOL)a0;
- (void)updateResetButtonToDisabled:(BOOL)a0;
- (void)showTitleToSubTitleWithSubTitle:(id)a0 duration:(double)a1;
- (void)showCollectionToTitleWithTitle:(id)a0 duration:(double)a1;
- (void)showTitleToCollectionWithDuration:(double)a0;
- (void)showSubTitleToTitleWithTitle:(id)a0 duration:(double)a1;
- (void)p_setupTabView;
- (void)p_setupDetailTitleView;
- (void)p_setupSubDetailTitleView;
- (void)p_handleReset;
- (long long)maxTitleCountWithoutCompressing;
- (void)p_updateLayout:(id)a0;
- (void)p_updateScrollEnabled;
- (void)animateFromView:(id)a0 toView:(id)a1 duration:(double)a2 directionLeft:(BOOL)a3;
- (void)p_handleSwitch:(BOOL)a0 isManually:(BOOL)a1;
- (void)setFlagDotHidden:(BOOL)a0 atIndex:(long long)a1;
- (void)showSubItemsWithTitle:(id)a0 duration:(double)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSections;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTitles:(id)a0;
- (void)selectItemAtIndex:(long long)a0;

@end
