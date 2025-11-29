@class NSString, ACCMusicUIThemeModel, AWEASMusicCategoryViewController;

@interface ACCASMusicCategoryCollectionTableViewCell : UITableViewCell <HTSVideoAudioSupplier>

@property (retain, nonatomic) AWEASMusicCategoryViewController *musicCategoryVC;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL shouldHideCellMoreButton;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;
@property (nonatomic) BOOL disableCutMusic;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ willClipBlock;
@property (retain, nonatomic) ACCMusicUIThemeModel *themeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)recommendedHeight:(long long)a0;
+ (id)identifier;

- (void)configWithMusicCategoryModelArray:(id)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)accessibilityElements;
- (void)setupUI;

@end
