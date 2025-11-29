@class DitoGeneralContainerTagsViewModel, UIScrollView, NSString;

@interface DitoGeneralContainerTagsView : DitoComponentView <UIScrollViewDelegate>

@property (weak, nonatomic) DitoGeneralContainerTagsViewModel *tagsViewModel;
@property (retain, nonatomic) UIScrollView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)buildSubviews;
- (void)fillData;
- (void)trackTagItemViewShow;
- (void)removeAllTagItemViews;
- (id)stickView;
- (void)unStickView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;

@end
