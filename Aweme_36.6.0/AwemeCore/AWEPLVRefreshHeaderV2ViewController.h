@class AWEPadBaseSectionViewModel, AWEPLVNormalHeaderModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVRefreshHeaderV2ViewController : AWEPadRefreshHeaderViewController

@property (retain, nonatomic) AWEPLVNormalHeaderModel *model;
@property (nonatomic) double viewWidth;
@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)pageKey;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void)trackRefreshClick;
- (id)title;
- (long long)refreshCount;

@end
