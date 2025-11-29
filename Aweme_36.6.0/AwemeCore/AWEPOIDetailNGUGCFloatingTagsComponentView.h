@class AWEPOIDetailNGPageContext, AWEPOIDetailFeedUgcFilterTagsView, AWEPOIDetailNGUGCFloatingTagsComponentViewModel;

@interface AWEPOIDetailNGUGCFloatingTagsComponentView : DitoComponentView

@property (retain, nonatomic) AWEPOIDetailFeedUgcFilterTagsView *tagsView;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (weak, nonatomic) AWEPOIDetailNGUGCFloatingTagsComponentViewModel *viewModel;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (void)showFloatTagView;
- (void)hiddenFloatTagView;
- (void)reloadTags;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
