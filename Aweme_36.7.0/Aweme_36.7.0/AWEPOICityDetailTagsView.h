@class AWEPOICityDetailTagsViewModel, UIView;

@interface AWEPOICityDetailTagsView : DitoComponentView

@property (weak, nonatomic) AWEPOICityDetailTagsViewModel *tagsViewModel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *selectedView;

- (void)updateViewModel:(id)a0;
- (void)fillData:(double)a0;
- (void)buildSubviews;
- (void)trackTagItemViewShow;
- (void)removeAllTagItemViews;
- (id)stickView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
