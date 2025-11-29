@class RTVVoipSession, NSString, NSNumber, RTVAnimatorViewPanGestureRecognizer;
@protocol RTVVoipContextManagerInterface, RxInjector, RTVTopViewControllerInterface;

@interface AWERTVNarrowViewHelper : NSObject <RTVNarrowViewHelperInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVAnimatorViewPanGestureRecognizer *viewGesture;
@property (readonly, nonatomic) id<RTVTopViewControllerInterface> topViewControllerGetter;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, weak, nonatomic) RTVVoipSession *session;
@property (retain, nonatomic) NSNumber *keyboardHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addObservers;
- (void)__feedDidAppear;
- (void)__keyboardWillShow:(id)a0;
- (void)__keyboardWillHide:(id)a0;
- (double)__heightInNoti:(id)a0;
- (id)__defaultSafeAreas;
- (BOOL)__isFirstLevelPage;
- (long long)__tabbarSelectedButtonType;
- (id)__feedSideSafeArea;
- (id)__currentTopViewController;
- (id)__navBarSafeArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameWithSuggestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useDefaultSafeArea:(BOOL)a1 attachCorner:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameWithSuggestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useDefaultSafeArea:(BOOL)a1 attachCorner:(BOOL)a2 preferredAlignment:(long long)a3 verticalAlignment:(long long)a4;
- (id)narrowViewExtraSafeAreas;
- (id)__line:(id)a0 minusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)__flattenArray:(id)a0;
- (double)narrowDrawerWidth;
- (double)narrowDrawerAttachXPosition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameWithSuggestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useDefaultSafeArea:(BOOL)a1;
- (long long)verticalAlignmentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)horizontalAlignmentWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)callIconStringWithSession:(id)a0 type:(long long)a1;
- (id)stringForWaitingWithSession:(id)a0;
- (id)__tcCurrentViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__safeAreaInsets;

@end
