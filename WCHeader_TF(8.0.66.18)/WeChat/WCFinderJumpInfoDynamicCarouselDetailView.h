@class NSArray, WCFinderJumpInfoDynamicCarouselDetailViewItem, UIView;

@interface WCFinderJumpInfoDynamicCarouselDetailView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *itemViews;
@property (readonly, nonatomic) WCFinderJumpInfoDynamicCarouselDetailViewItem *viewItem;
@property (copy, nonatomic) id /* block */ contentSizeDidChangeBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadContentViewWithViewItem:(id)a0;
- (void)switchCarouselWithViewItem:(id)a0 animation:(long long)a1;
- (void)updateCarouselContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)layoutContentSubviews;
- (void)contentSizeDidChange;
- (void).cxx_destruct;

@end
