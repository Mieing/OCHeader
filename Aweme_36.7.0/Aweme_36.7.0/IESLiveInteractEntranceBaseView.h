@class UITapGestureRecognizer, UIView;

@interface IESLiveInteractEntranceBaseView : UIView

@property (nonatomic) BOOL interactiveEntrance_entranceEnable;
@property (retain, nonatomic) UITapGestureRecognizer *interactiveEntrance_replacedTap;
@property (retain, nonatomic) UIView *interactiveEntrance_blockView;
@property (copy, nonatomic) id /* block */ interactiveEntrance_replacedTapBlock;

- (void)setupViewWithEntranceTitle:(id)a0 entranceIconName:(id)a1;
- (void)interactiveEntrance_replacedTapAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 entranceTitle:(id)a1 entranceIconName:(id)a2;
- (void)interactiveEntrance_setEntranceEnable:(BOOL)a0 replacedTapAction:(id /* block */)a1;
- (void).cxx_destruct;

@end
