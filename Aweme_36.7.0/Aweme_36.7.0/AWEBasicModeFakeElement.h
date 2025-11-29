@class UITapGestureRecognizer, AWEAwemeModel;

@interface AWEBasicModeFakeElement : UIView

@property (retain, nonatomic) UITapGestureRecognizer *tap;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL disableTapGes;

- (void)p_setup;
- (void)p_addTapGes;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
