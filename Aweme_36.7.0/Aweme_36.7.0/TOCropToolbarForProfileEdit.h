@class UIButton, NSString, UIView;

@interface TOCropToolbarForProfileEdit : UIView <TOCropToolbarProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *doneTextButton;
@property (retain, nonatomic) UIButton *doneIconButton;
@property (retain, nonatomic) UIButton *cancelTextButton;
@property (retain, nonatomic) UIButton *cancelIconButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIButton *clampButton;
@property (retain, nonatomic) UIButton *rotateButton;
@property (nonatomic) BOOL reverseContentLayout;
@property (nonatomic) double statusBarHeightInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundViewOutsets;
@property (copy, nonatomic) NSString *doneTextButtonTitle;
@property (copy, nonatomic) NSString *cancelTextButtonTitle;
@property (readonly, nonatomic) UIButton *rotateCounterclockwiseButton;
@property (readonly, nonatomic) UIButton *rotateClockwiseButton;
@property (copy, nonatomic) id /* block */ cancelButtonTapped;
@property (copy, nonatomic) id /* block */ doneButtonTapped;
@property (copy, nonatomic) id /* block */ rotateCounterclockwiseButtonTapped;
@property (copy, nonatomic) id /* block */ rotateClockwiseButtonTapped;
@property (copy, nonatomic) id /* block */ clampButtonTapped;
@property (copy, nonatomic) id /* block */ resetButtonTapped;
@property (nonatomic) BOOL clampButtonGlowing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clampButtonFrame;
@property (nonatomic) BOOL clampButtonHidden;
@property (nonatomic) BOOL rotateCounterclockwiseButtonHidden;
@property (nonatomic) BOOL rotateClockwiseButtonHidden;
@property (nonatomic) BOOL resetButtonEnabled;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } doneButtonFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)publishImageAsStory;
- (void)setRotateCounterClockwiseButtonHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)buttonTapped:(id)a0;
- (void)setup;

@end
