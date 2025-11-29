@class ACCMusicUIThemeModel, NSArray, UICollectionView, NSString, UILabel, UIView;

@interface ACCASMusicChartCollectionTableViewCell : UITableViewCell <UICollectionViewDelegate, UICollectionViewDataSource, HTSVideoAudioSupplier>

@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UILabel *topLeftLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *chartModels;
@property (nonatomic) long long configCount;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;

+ (double)recommendedHeight;

- (void)configWithMusicChartModelArray:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)accessibilityElements;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)setupUI;

@end
