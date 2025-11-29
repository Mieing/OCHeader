@class MMUILabel, MMUIButton;

@interface MJComposingBGMAdjustPanelItemButton : MMUIView

@property (readonly, nonatomic) MMUIButton *button;
@property (readonly, nonatomic) MMUILabel *label;
@property (nonatomic) BOOL isSelected;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configIcon:(id)a0 forState:(unsigned long long)a1;
- (void)configText:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;

@end
