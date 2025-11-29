@class ZZFLEXAngel, NSArray, UICollectionView, WAWebViewController, UIButton;

@interface WADebugMenuSheet : WAPageSheet

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (retain, nonatomic) NSArray *menuData;
@property (weak, nonatomic) WAWebViewController *webVC;

- (id)initWithWebVC:(id)a0;
- (id)init;
- (void)showSwitchRenderMenu;
- (void)showAuditsMenu;
- (void)setupUI;
- (void)reloadData;
- (double)contentHeight;
- (void)resetContentViewCornerRadius;
- (void)pageSheetWillAppear:(id)a0;
- (void).cxx_destruct;

@end
