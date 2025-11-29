@class AWEPadBaseSectionViewModel;
@protocol AWEPLVSectionViewModelProtocol;

@interface AWEPLVMoreHeaderViewController : AWEPadListReusableViewBaseController

@property (weak, nonatomic) AWEPadBaseSectionViewModel<AWEPLVSectionViewModelProtocol> *sectionViewModel;
@property (nonatomic) double viewWidth;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)trackClickMoreButton;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (void)handleTapMoreButton;
- (Class)viewClass;

@end
