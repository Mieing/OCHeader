@class NSString, NSMutableDictionary, MMWebCanvasItemData, MMWebCanvasView, BTRecoFlowSeparatorLineView;

@interface BTRecoFlowCanvasCell : BTRecoFlowBaseTableViewCell <MMWebJsCanvasViewPortDelegate>

@property (copy, nonatomic) NSString *canvasId;
@property (nonatomic) double navigationBarHeight;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) MMWebCanvasView *canvasView;
@property (retain, nonatomic) NSMutableDictionary *dicPopupView;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) double viewHeight;
@property (retain, nonatomic) MMWebCanvasItemData *itemData;
@property (nonatomic) BOOL hasExposedOnce;
@property (retain, nonatomic) BTRecoFlowSeparatorLineView *bottomSeparatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)detachLogicAndDestroyCurrentCanvas;
- (void)setSectionData:(id)a0;
- (void)updateSectionWithHeight:(double)a0 needReload:(BOOL)a1;
- (void)initOrUpdateCanvasView;
- (id)accessibilityLabel;
- (void)initBottomSeparatorView;
- (void)onAppear;
- (void)reportCanvasExpose:(BOOL)a0;
- (void)reportOnAppear:(BOOL)a0;
- (void)onDisappear;
- (void)layoutSubviews;
- (double)getCanvasViewWidth:(id)a0;
- (double)getCanvasViewHeight:(id)a0;
- (double)getCanvasViewVisibleOffsetY:(id)a0;
- (double)getCanvasViewVisibleContainerHeight:(id)a0;
- (BOOL)isCanvasViewAppear:(id)a0;
- (BOOL)isCanvasViewInBackground:(id)a0;
- (void)canvasSetHeight:(double)a0 canvasId:(id)a1;
- (void)reportSetHeight;
- (void)canvasPopUp:(id)a0 fromCanvasId:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hexColor:(id)a3 mode:(unsigned int)a4 closeBlock:(id /* block */)a5;
- (void)popUpCanvas:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 hexColor:(id)a2 mode:(unsigned int)a3 closeBlock:(id /* block */)a4;
- (void)canvasClosePopUp:(id)a0 fromCanvasId:(id)a1;
- (id)getInfoWithKey:(id)a0;
- (long long)getFPS:(id)a0;
- (id)getCurrentWebviewViewController;
- (BOOL)isAppear;
- (void).cxx_destruct;

@end
