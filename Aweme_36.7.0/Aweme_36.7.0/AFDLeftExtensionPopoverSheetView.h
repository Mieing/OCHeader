@class UIColor, NSMutableDictionary, UIView, NSMutableArray;

@interface AFDLeftExtensionPopoverSheetView : UIView

@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (retain, nonatomic) NSMutableArray *actionButtons;
@property (retain, nonatomic) NSMutableDictionary *yellowDotsIndex;
@property (retain, nonatomic) NSMutableDictionary *dividerIndex;
@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double contentViewWidth;
@property (nonatomic) long long alignmentMode;
@property (nonatomic) double windowSpace;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) long long colorMode;
@property (copy, nonatomic) id /* block */ dismissCompletionBlock;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) double fixedContentHeight;
@property (nonatomic) double fixedOffsetX;
@property (nonatomic) double fixedActionCellHeight;
@property (nonatomic) double yellowDotWidth;
@property (nonatomic) double yellowDotHeight;
@property (nonatomic) BOOL useNewYellowDotLayout;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) double iconSide;
@property (retain, nonatomic) UIColor *defaultShapeLayerColor;
@property (retain, nonatomic) UIColor *defaultMaskLayerColor;

- (void)setupContentForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2 coverView:(id)a3 calculateFrameWithCoverView:(BOOL)a4;
- (void)cutShape:(unsigned long long)a0;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 direction:(unsigned long long)a3 calculateFrameWithCoverView:(BOOL)a4;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverView:(id)a2 direction:(unsigned long long)a3;
- (void)clickAction:(id)a0;
- (void)addActionWithTitle:(id)a0 handler:(id /* block */)a1;
- (void)addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 handler:(id /* block */)a3;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 handler:(id /* block */)a3;
- (void)addActionWithImage:(id)a0 title:(id)a1 titleColor:(id)a2 titleFont:(id)a3 handler:(id /* block */)a4;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2;
- (void)dismissWithAnimation;
- (id)p_buttonTitleColor:(id)a0;
- (id)initWithWindowSpace:(double)a0;
- (void)addActionWithImageURL:(id)a0 title:(id)a1 titleColor:(id)a2 titleFont:(id)a3 shouldShowDivider:(BOOL)a4 actionCellYellowDotStyle:(unsigned long long)a5 shouldShow:(BOOL)a6 handler:(id /* block */)a7;
- (void)addActionWithImageURL:(id)a0 title:(id)a1 titleColor:(id)a2 actionCellYellowDotStyle:(unsigned long long)a3 shouldShow:(BOOL)a4 handler:(id /* block */)a5;
- (id)initWithAlignmentMode:(long long)a0;
- (void)p_addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 image:(id)a3 imagePosition:(unsigned long long)a4 handler:(id /* block */)a5;
- (void)p_addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 imageURL:(id)a3 imagePosition:(unsigned long long)a4 shouldShowDivider:(BOOL)a5 actionCellYellowDotStyle:(unsigned long long)a6 shouldShow:(BOOL)a7 handler:(id /* block */)a8;
- (void)p_addActionWithTitle:(id)a0 titleColor:(id)a1 titleFont:(id)a2 imageURL:(id)a3 imagePosition:(unsigned long long)a4 yellowDotStyle:(unsigned long long)a5 shouldShow:(BOOL)a6 handler:(id /* block */)a7;
- (void)p_doNothing;
- (id)p_setupButtonWithTitle:(id)a0 titleFont:(id)a1 titleColor:(id)a2 image:(id)a3 imagePosition:(unsigned long long)a4 yellowDotStyle:(unsigned long long)a5 shouldShowYellowDot:(BOOL)a6;
- (id)p_setupDividerButton;
- (id)p_setupButtonWithCommonAttribute;
- (void)addActionWithImage:(id)a0 imagePosition:(unsigned long long)a1 title:(id)a2 titleColor:(id)a3 handler:(id /* block */)a4;
- (id)initWithAlignmentMode:(long long)a0 windowSpace:(double)a1;
- (void)showForView:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 direction:(unsigned long long)a2 shouldHideArrow:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
