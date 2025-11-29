@class NSArray;

@interface AWEVideoPublishMusicSelectTopTabView : UIView {
    double _calcedInnerWidth;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *views;

- (void)refreshWithClickedItemData:(id)a0;
- (void)setItemClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
