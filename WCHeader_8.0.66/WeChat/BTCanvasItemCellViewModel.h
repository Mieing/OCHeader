@class NSString, MMWebCanvasItemData;
@protocol BTCanvasItemCellViewModelDelegate;

@interface BTCanvasItemCellViewModel : BTBaseItemCellViewModel <MMWebCanvasJsEngineMgrExt, MMWebJsCanvasViewPortDelegate>

@property (retain, nonatomic) MMWebCanvasItemData *itemData;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL isFinishCreateClient;
@property (nonatomic) double viewHeight;
@property (nonatomic) unsigned long long initializeTime;
@property (nonatomic) unsigned long long appearTime;
@property (nonatomic) BOOL hasExposedOnce;
@property (readonly, nonatomic) NSString *canvasId;
@property (readonly, nonatomic) NSString *bizType;
@property (weak, nonatomic) id<BTCanvasItemCellViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMsgWrap:(id)a0 viewWidth:(double)a1 delegate:(id)a2;
- (void)internalInit;
- (void)setCellView:(id)a0;
- (void)dealloc;
- (id)itemViewClassName;
- (id)canvasCellView;
- (id)createCanvasViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateCanvasRenderClientViewDelegate;
- (void)onAppear;
- (void)reportCanvasExpose:(BOOL)a0;
- (void)reportOnAppear:(BOOL)a0;
- (void)onDisappear;
- (void)onDestroyCanvasView;
- (void)onScroll;
- (id)accessibilityLabel;
- (double)getCanvasViewWidth:(id)a0;
- (double)getCanvasViewHeight:(id)a0;
- (double)getCanvasViewVisibleOffsetY:(id)a0;
- (double)getCanvasViewVisibleContainerHeight:(id)a0;
- (BOOL)isCanvasViewAppear:(id)a0;
- (BOOL)isCanvasViewInBackground:(id)a0;
- (void)canvasSetHeight:(double)a0 canvasId:(id)a1;
- (void)reportSetHeight;
- (void)canvasPopUp:(id)a0 fromCanvasId:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hexColor:(id)a3 mode:(unsigned int)a4 closeBlock:(id /* block */)a5;
- (void)canvasClosePopUp:(id)a0 fromCanvasId:(id)a1;
- (id)getInfoWithKey:(id)a0;
- (void)onItemClick:(unsigned int)a0 fromCanvasId:(id)a1;
- (long long)getFPS:(id)a0;
- (void)onFirstFrameRendered:(id)a0;
- (void)onCanvasViewTouchEvent:(id)a0 canvasId:(id)a1;
- (id)getCurrentWebviewViewController;
- (BOOL)isAppear;
- (void).cxx_destruct;

@end
