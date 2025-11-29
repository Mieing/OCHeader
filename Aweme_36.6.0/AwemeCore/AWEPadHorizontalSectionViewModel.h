@class AWEPadHorizontalSectionInnerViewModel, AWEPadHorizontalCellController, NSNumber;

@interface AWEPadHorizontalSectionViewModel : AWEPadBaseSectionViewModel

@property (retain, nonatomic) AWEPadHorizontalSectionInnerViewModel *innerSectionViewModel;
@property (retain, nonatomic) AWEPadHorizontalCellController *horizontalCellController;
@property (retain, nonatomic) NSNumber *scrollOffsetX;
@property (copy, nonatomic) id /* block */ handleForScrollToCollectionTop;
@property (copy, nonatomic) id /* block */ scrollViewDidScrollToEndAction;
@property (copy, nonatomic) id /* block */ scrollViewDidDragged;
@property (retain, nonatomic) Class innerSectionViewModelClazz;

- (void)removeModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (id)modelsArray;
- (void)replaceByModels:(id)a0;
- (void)appendModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)updateByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)replaceByModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)removeAllModels:(BOOL)a0 sync:(BOOL)a1;
- (void)insertModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)triggerCollectionViewScrollToTop;
- (void).cxx_destruct;

@end
