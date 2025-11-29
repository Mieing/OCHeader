@class AWEKefuDragBoxView, AWEKefuFloatingWindowTrashView, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol AWEKefuFloatingWindowViewDelegate;

@interface AWEKefuFloatingWindowView : UIView <AWEKefuDragBoxViewDelegate, AWEKefuViewHierarchyProtocol>

@property (retain, nonatomic) AWEKefuDragBoxView *dragBoxView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEKefuFloatingWindowTrashView *trashView;
@property (nonatomic) BOOL isInDragEndAnimation;
@property (nonatomic) BOOL isInKeyboardChangeAnimation;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id<AWEKefuFloatingWindowViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)viewHierarchy;
- (void)p_addObserver;
- (void)p_keyboardWillShow:(id)a0;
- (void)p_removeObserver;
- (void)startVolumeAnimation:(double)a0;
- (void)dragBoxView:(id)a0 didChangeExpandState:(BOOL)a1;
- (void)updateAvatarWithUrlString:(id)a0;
- (void)addInfoView:(id)a0;
- (void)removeInfoView:(id)a0;
- (void)p_loadTrashView;
- (void)p_loadDragBoxView;
- (void)p_handlePanGesture:(id)a0;
- (void)p_handleTapGesture:(id)a0;
- (void)updateTrashViewState:(BOOL)a0;
- (void)startTrashViewShowAnimation;
- (void)updateContentViewTransformWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)startTrashViewHideAnimation;
- (struct CGPoint { double x0; double x1; })translationWithOriginalTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)updateContentViewFrameWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (double)p_leftInset;
- (double)p_rightInset;
- (double)p_topInset;
- (double)p_bottomInset;
- (void)p_keyboardWillHide:(id)a0;
- (double)p_keyboardHeightWithNotification:(id)a0;
- (void)updateAvatarPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateTrashViewText:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })currentPosition;
- (BOOL)isDragging;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutContentView;

@end
