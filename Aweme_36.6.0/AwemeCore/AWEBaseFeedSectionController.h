@class NSObject;
@protocol AWEBaseFeedSectionConfigurationOverride;

@interface AWEBaseFeedSectionController : AWEBaseListSectionController

@property (retain, nonatomic) NSObject<AWEBaseFeedSectionConfigurationOverride> *configuration;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (Class)cellClass;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
