@class NSMutableArray, UIView;

@interface WCStoryActionToolBar : MMUIView

@property (retain, nonatomic) UIView *toolBar;
@property (retain, nonatomic) NSMutableArray *toolbarItemList;
@property (readonly, nonatomic) unsigned long long numberOfButtons;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadButtons;
- (void)addTapRecognizer;
- (void)show;
- (void)addButtonWithTitle:(id)a0 iconName:(id)a1 isDestructive:(BOOL)a2 handler:(id /* block */)a3;
- (void)hideSelf;
- (void)clickButton:(id)a0;
- (void).cxx_destruct;

@end
