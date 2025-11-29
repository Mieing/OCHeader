@class NSArray;

@interface AWEChallengeDetailBodySectionController : AWEBaseListSectionController

@property (nonatomic) double sectionHeight;
@property (copy, nonatomic) NSArray *cellControllers;
@property (copy, nonatomic) NSArray *cellControllerHeight;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)reloadAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleCellHeightChange:(id)a0;
- (void)updateContentAlpha:(double)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)showSeparator;
- (id)sectionBackgroundColor;
- (void)dealloc;

@end
