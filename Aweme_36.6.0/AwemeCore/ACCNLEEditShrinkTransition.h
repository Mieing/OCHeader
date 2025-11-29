@class NSString, UIViewController, UIView;
@protocol ACCNLEEditZoomTransitionInnerContextProvider, DVEPreviewTransitionDelegateProtocol, ACCNLEEditZoomTransitionOuterContextProvider;

@interface ACCNLEEditShrinkTransition : NSObject <DVEPreviewTransitionContextProvider>

@property (retain, nonatomic) UIView *fromVCSnapshot;
@property (retain, nonatomic) UIView *toVCSnapshot;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *focusView;
@property (retain, nonatomic) UIView *fromView;
@property (retain, nonatomic) UIView *fromViewMigrationContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (weak, nonatomic) UIViewController<ACCNLEEditZoomTransitionInnerContextProvider> *fromCP;
@property (weak, nonatomic) id<DVEPreviewTransitionDelegateProtocol> transitionDelegate;
@property (weak, nonatomic) id<ACCNLEEditZoomTransitionOuterContextProvider> innerProvider;
@property (copy, nonatomic) id /* block */ outterSnapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startDefaultAnimationWithFromVC:(id)a0 toVC:(id)a1 fromContextProvider:(id)a2 toContextProvider:(id)a3 containerView:(id)a4 context:(id)a5 interactionType:(unsigned long long)a6 completionHandler:(id /* block */)a7;
- (BOOL)isForAppear;
- (void).cxx_destruct;
- (unsigned long long)interactionType;
- (void)dealloc;

@end
