@class UIView, NSAttributedString, NSString, IESGCPXPlayGameSidebarGuideView, IESGCPXPlayGameDraggableGuideView, UIImageView, UIPanGestureRecognizer, IESGCPTimer;

@interface IESGCPXPlayGameDraggableView : UIView <IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beforDragFrame;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (retain, nonatomic) IESGCPXPlayGameDraggableGuideView *guideView;
@property (retain, nonatomic) IESGCPXPlayGameSidebarGuideView *sidebarGuide;
@property (retain, nonatomic) IESGCPTimer *suckToTheSideTimer;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGPoint { double x; double y; } lastShowOrigin;
@property (copy, nonatomic) NSAttributedString *guideString;
@property (retain, nonatomic) UIView *tipView;
@property (copy, nonatomic) id /* block */ tapAction;
@property (nonatomic) long long viewStyle;
@property (copy, nonatomic) NSString *tipText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)updateOrientationStatus:(long long)a0;
- (void)_onSelfClicked:(id)a0;
- (void)setupTipView;
- (BOOL)isOnLeftOfScreen;
- (void)_handlePanGestureBegan;
- (void)_handlePanGestureUnderway:(id)a0;
- (void)_handlePanGestureEnded;
- (void)_invalidateSuckToTheSideTimerTimer;
- (void)_safeUpdateFrame:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stickPointByScreen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getSafeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewSafeArea;
- (id)_getValidFrameView;
- (void)_setupBgImageView;
- (void)_setupGuideView;
- (double)_getOriginYWithOrientation:(long long)a0;
- (void)_delaySuckToTheSide:(double)a0;
- (void)setupGiftTipView;
- (void)setupRedTipView;
- (void)_delayFoldSelf;
- (void)dismissWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_pan:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)_setupGestures;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;
- (void)_resetUI;

@end
