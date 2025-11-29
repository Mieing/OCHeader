@class NSString, NSMutableDictionary, MMWebCanvasView, BTCanvasItemCellViewModel;

@interface BTCanvasItemCellView : BTBaseItemCellView

@property (copy, nonatomic) NSString *canvasId;
@property (nonatomic) double navigationBarHeight;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) MMWebCanvasView *canvasView;
@property (retain, nonatomic) NSMutableDictionary *dicPopupView;
@property (readonly, nonatomic) BTCanvasItemCellViewModel *viewModel;

- (id)initWithViewModel:(id)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setViewModel:(id)a0;
- (void)initCanvasView;
- (void)updateCanvasView;
- (double)canvasViewHeight;
- (void)popUpCanvas:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hexColor:(id)a2 mode:(unsigned int)a3 closeBlock:(id /* block */)a4;
- (void)closePopupCanvas:(id)a0;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewVisibleContainerHeight;
- (long long)getFPS;
- (BOOL)isCanvasViewInBackground;
- (void)onCellDidScroll;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
