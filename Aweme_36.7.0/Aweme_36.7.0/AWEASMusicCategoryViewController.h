@class ACCMusicUIThemeModel, NSArray, UICollectionView, NSString, UILabel, UIView, UIButton;

@interface AWEASMusicCategoryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HTSVideoAudioSupplier>

@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UILabel *topLeftLabel;
@property (retain, nonatomic) UIButton *topRightButton;
@property (retain, nonatomic) UICollectionView *musicCategoryCollectionView;
@property (copy, nonatomic) NSArray *dataList;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

+ (double)recommendedHeight:(unsigned long long)a0;

- (void)configWithMusicCategoryModelArray:(id)a0;
- (void)didTapAllCategory;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (double)collectionViewHeight;

@end
