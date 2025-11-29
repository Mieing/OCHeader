@class UIPanGestureRecognizer, UIView, NSMutableArray, UIButton;

@interface AWEBatManDraggableView : UIView

@property (retain, nonatomic) UIButton *iconButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableArray *actions;
@property (nonatomic) BOOL hasLayout;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beforeDragFrame;
@property (nonatomic) struct CGSize { double width; double height; } foldSize;
@property (nonatomic) struct CGSize { double width; double height; } expandSize;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL isDragging;
@property (copy, nonatomic) id /* block */ clickHandler;

- (void)clickIcon;
- (void)setupButtonUI;
- (void)delayFold;
- (void)clickIconAction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSafeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)safeUpdateFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickPointByScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewSafeArea;
- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (id)init;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pan:(id)a0;
- (void)expand;
- (void)fold;

@end
