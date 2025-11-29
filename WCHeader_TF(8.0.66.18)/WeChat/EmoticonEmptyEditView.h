@class NSString, EditImageDeleteBarView, MMTimer, UIView, EditImageWidgetTool, NSMutableArray;
@protocol EditImageAnimatedOperationDelegate, EmoticonEmptyEditViewGestureDelegate;

@interface EmoticonEmptyEditView : UIView <EditImageWidgetToolDelegate, UIGestureRecognizerDelegate> {
    EditImageWidgetTool *m_highlightWidgetTool;
    UIView *m_topLayersView;
    UIView *m_movingLayersView;
    UIView *m_markView;
    NSMutableArray *m_widgetToolArray;
    unsigned long long m_topViewsCount;
    MMTimer *m_timer;
    BOOL m_tapOnly;
}

@property (weak, nonatomic) id<EditImageAnimatedOperationDelegate, EmoticonEmptyEditViewGestureDelegate> delegate;
@property (retain, nonatomic) EditImageDeleteBarView *_deleteBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEditViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithEditViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tapOnly:(BOOL)a1;
- (void)configGestureSetting;
- (void)setEditViewCornerRadius:(double)a0;
- (id)exportEditImageLayer;
- (id)exportEmoticonMd5List;
- (unsigned long long)widgetToolsCount;
- (void)startGesture;
- (void)endGesture:(id)a0;
- (void)bringWidgetviewToFront:(id)a0;
- (void)bringWidgetviewBack:(id)a0;
- (void)updateViewIndex;
- (void)removeSubview:(id)a0;
- (int)checkToolType;
- (void)widgetToolBecomeFirstResponder:(id)a0;
- (double)scrollViewZoomScale;
- (void)addNewWidget:(id)a0;
- (void)checkWidgetOutside:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)findGestureWidget:(id)a0;
- (void)addNewSubview:(id)a0;
- (void)toolArrayAddTool:(id)a0;
- (void)toolArrayRemoveTool:(id)a0;
- (void)startTimer;
- (void)cancelTimer;
- (void)triggerTimer;
- (void)setDeleteBarHidden:(BOOL)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)handlePinchGesture:(id)a0;
- (void)handleRotateGesture:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
