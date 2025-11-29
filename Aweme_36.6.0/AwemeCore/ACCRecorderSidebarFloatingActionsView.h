@class UIStackView, UIView;

@interface ACCRecorderSidebarFloatingActionsView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL shouldBeTransparent;
@property (nonatomic) struct CGPoint { double x; double y; } centerCollapsed;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL isAnimating;
@property (copy, nonatomic) id /* block */ didTapCloseBlock;

- (void)markAsTransparent;
- (id)generateButtonWithTitle:(id)a0;
- (void)moveCenterToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateFramesForExpand;
- (void)updateFramesForCollapse;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addButton:(id)a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupGestures;
- (void)expandAnimated:(BOOL)a0;
- (void)collapseAnimated:(BOOL)a0;
- (void)didTapView;

@end
