@class DUXPopover;

@interface AWESearchAIGCInputCreatePanelRequireOptionView : UIView

@property (retain, nonatomic) DUXPopover *popover;
@property (copy, nonatomic) id /* block */ cancelCallback;

+ (id)showWithTargetView:(id)a0 optList:(id)a1 selectCallback:(id /* block */)a2 cancelCallback:(id /* block */)a3;

- (void)showWithTargetView:(id)a0 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 maxSize:(struct CGSize { double x0; double x1; })a2 optList:(id)a3 selectCallback:(id /* block */)a4 cancelCallback:(id /* block */)a5;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
