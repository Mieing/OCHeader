@class AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVHistoryHeaderViewController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double viewWidth;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (void)setupButton:(id)a0 headerView:(id)a1;
- (void)handleClickHistory:(id)a0;
- (void)handleClickFavourite;
- (void)handleClickDownload;
- (void)tryLoginWithCompletion:(id /* block */)a0;
- (Class)viewClass;

@end
