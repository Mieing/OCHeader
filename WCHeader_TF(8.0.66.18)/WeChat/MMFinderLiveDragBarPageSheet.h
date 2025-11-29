@class MMLiveShopShelfDragBar;

@interface MMFinderLiveDragBarPageSheet : MMPageSheetBaseView

@property (retain, nonatomic) MMLiveShopShelfDragBar *dragBar;

- (id)getDragBarAsView;
- (void)layoutSubviews;
- (void)setDetailView:(id)a0;
- (void)pageSheetDidChangeVisibleHeight:(double)a0;
- (void).cxx_destruct;

@end
