@class UIColor, NSString, NSMutableDictionary, UIView, NSMutableArray;

@interface AWEPopoverActionSheet : UIView <IESIMPopoverActionSheetProtocol, AWEACCPopoverActionSheetHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) NSMutableDictionary *yellowDotsIndex;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) long long alignmentMode;
@property (retain, nonatomic) UIView *accessibilityCloseView;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long colorMode;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) double fixedContentHeight;
@property (nonatomic) double fixedOffsetY;
@property (nonatomic) double fixedOffsetX;
@property (retain, nonatomic) UIColor *defaultShapeLayerColor;
@property (retain, nonatomic) UIColor *defaultMaskLayerColor;

- (void)showOnView:(id)a0;
- (void)__dismiss;
- (id)initWithAlignmentModel:(long long)a0;
- (void)__addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 image:(id)a3 imagePosition:(unsigned long long)a4 handler:(id /* block */)a5;
- (void)__addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 image:(id)a3 imagePosition:(unsigned long long)a4 yellowDotStyle:(unsigned long long)a5 shouldShow:(BOOL)a6 handler:(id /* block */)a7;
- (void)__doNothing;
- (void)setupContentForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2 coverView:(id)a3 calculateFrameWithCoverView:(BOOL)a4;
- (void)cutShape:(unsigned long long)a0;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 direction:(unsigned long long)a3 calculateFrameWithCoverView:(BOOL)a4;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 direction:(unsigned long long)a3;
- (id)__setupButtonWithTitle:(id)a0 titleFont:(id)a1 titleColor:(id)a2 image:(id)a3 imagePosition:(unsigned long long)a4 yellowDotStyle:(unsigned long long)a5 shouldShowYellowDot:(BOOL)a6;
- (id)__setupButtonWithCommonAttribute;
- (id)__buttonTitleColor:(id)a0;
- (void)clickAction:(id)a0;
- (void)addActionWithTitle:(id)a0 handler:(id /* block */)a1;
- (void)addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 handler:(id /* block */)a3;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 handler:(id /* block */)a3;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 titleFont:(id)a3 handler:(id /* block */)a4;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 actionCellYellowDot:(unsigned long long)a3 shouldShow:(BOOL)a4 handler:(id /* block */)a5;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2;
- (void)setupContentForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2;
- (void)dimiss;
- (id)popoverContentView;
- (unsigned long long)p_awePopoverArrowDirectionWithIESIMDirection:(unsigned long long)a0;
- (long long)p_awePopoverActionSheetStyleWithIESIMColorMode:(long long)a0;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 arrowDirection:(unsigned long long)a3;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 arrowDirection:(unsigned long long)a3 calcFrameWithCover:(BOOL)a4;
- (void)setPopoverColorMode:(long long)a0;
- (void)addActionWithImage:(id)a0 imagePosition:(unsigned long long)a1 title:(id)a2 titleColor:(id)a3 handler:(id /* block */)a4;
- (void)dismiss;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)init;
- (void)show;

@end
