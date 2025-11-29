@class AWEBaseListSectionController, AWEBaseListCellViewModel;

@interface AWEBaseListCellController : NSObject

@property (retain, nonatomic) AWEBaseListCellViewModel *viewModel;
@property (weak, nonatomic) AWEBaseListSectionController *sectionController;

+ (id)controllerWithViewModel:(id)a0;

- (id)erasedToAny;
- (void)didBindCellViewModel;
- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void)didEndDisplayingCell:(id)a0;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)didSelectItem;

@end
