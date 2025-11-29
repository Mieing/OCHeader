@class NSArray, AWEPlayInteractionWrapperView, UIView;

@interface AWEPlayInteractionEcomButtonView : UIView

@property (retain, nonatomic) UIView *ecomButtonStackView;
@property (retain, nonatomic) AWEPlayInteractionWrapperView *leftWrapperView;
@property (retain, nonatomic) AWEPlayInteractionWrapperView *mediumWrapperView;
@property (retain, nonatomic) AWEPlayInteractionWrapperView *rightWrapperView;
@property (retain, nonatomic) NSArray *initialAreas;
@property (retain, nonatomic) NSArray *finalAreas;

- (void)setUpButtonWithModel:(id)a0;
- (void)resetStackView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
