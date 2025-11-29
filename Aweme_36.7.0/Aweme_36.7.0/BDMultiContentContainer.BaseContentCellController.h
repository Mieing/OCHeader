@interface BDMultiContentContainer.BaseContentCellController : AWEBaseListCellController {
    void /* unknown type, empty encoding */ extensions;
}

- (void)didBindCellViewModel;
- (struct CGSize { double x0; double x1; })sizeForItemWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configCell:(id)a0;
- (void)willDisplayCell:(id)a0;
- (void)didEndDisplayingCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (Class)cellClass;

@end
