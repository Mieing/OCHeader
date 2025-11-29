@class IESLiveImageLabelButton, UIControl;

@interface IESLiveKTVBarButton : UIView

@property (retain, nonatomic) IESLiveImageLabelButton *actionButton;
@property (retain, nonatomic) UIControl *disableControl;
@property (copy, nonatomic) id /* block */ disableActionBlock;
@property (nonatomic) BOOL enabled;

+ (id)buttonWithTitle:(id)a0 imageName:(id)a1 actionBlock:(id /* block */)a2 disableActionBlock:(id /* block */)a3;
+ (id)buttonWithTitle:(id)a0 imageName:(id)a1 actionBlock:(id /* block */)a2;

- (void)updateTitleColor:(id)a0;
- (void)updateAccessibilityLabel:(id)a0;
- (id)initWithTitle:(id)a0 imageName:(id)a1 actionBlock:(id /* block */)a2 disableActionBlock:(id /* block */)a3;
- (void)setupTitleColor;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)updateTitleFont:(id)a0;
- (void)layoutComponents;

@end
