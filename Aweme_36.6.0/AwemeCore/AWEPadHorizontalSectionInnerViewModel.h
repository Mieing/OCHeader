@class AWEPadHorizontalSectionController, AWEPadHorizontalSectionViewModel;

@interface AWEPadHorizontalSectionInnerViewModel : AWEPadBaseSectionViewModel

@property (weak, nonatomic) AWEPadHorizontalSectionViewModel *containerSectionViewModel;
@property (weak, nonatomic) AWEPadHorizontalSectionController *containerSectionController;

- (BOOL)enableGrid;
- (Class)sectionControllerClaz;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
