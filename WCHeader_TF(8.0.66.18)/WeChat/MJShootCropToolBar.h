@class MMUIButton;
@protocol MJShootCropToolBarDelegate;

@interface MJShootCropToolBar : MMUIView

@property (retain, nonatomic) MMUIButton *rotateButton;
@property (retain, nonatomic) MMUIButton *flipButton;
@property (retain, nonatomic) MMUIButton *resetButton;
@property (weak, nonatomic) id<MJShootCropToolBarDelegate> delegate;
@property (nonatomic) BOOL resetEnabled;

+ (id)createButtonWithIconName:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)rotateButtonDidTouchUpInside:(id)a0;
- (void)flipButtonDidTouchUpInside:(id)a0;
- (void)resetButtonDidTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
