@class NSArray;

@interface HorizontalToolBarContainer : UIView {
    void /* function */ fixedBarItems;
    void /* function */ foldedBarItems;
    void /* unknown type, empty encoding */ expandPanelTopOffset;
    void /* unknown type, empty encoding */ barItemViewRotateAngle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moreBarItem;
    void /* unknown type, empty encoding */ expandPanel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stackView;
    void /* unknown type, empty encoding */ expandPanelWillAppear;
    void /* unknown type, empty encoding */ expandPanelDidAppear;
}

@property (nonatomic, readonly) BOOL isExpandPanelShowing;
@property (nonatomic, copy) NSArray *fixedBarItems;
@property (nonatomic, copy) NSArray *foldedBarItems;

- (void)updateBarItemViewsRotateAngle:(double)a0 animated:(BOOL)a1;
- (void)reloadBarItems:(id)a0 maxFixedItemsCount:(long long)a1 animated:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 expandPanelTopOffset:(double)a1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
