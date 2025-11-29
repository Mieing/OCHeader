@class UIView;

@interface IESLiveOptCategoryPanelView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) double panelToKeyboardTopDistance;

- (void)addKeyboardNotification;
- (void)removeKeyboardNotification;
- (void).cxx_destruct;
- (void)keyboardFrameChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
