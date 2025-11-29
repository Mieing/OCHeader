@class NSMutableArray, UIView;

@interface IESLiveEmoticonTabBar : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (copy, nonatomic) id /* block */ didSelectTabWithPageItem;

- (void)loadWithPageItems:(id)a0;
- (void)locatePageItem:(id)a0;
- (id)createTabItemViewWithPageItem:(id)a0;
- (void)selectTab:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
