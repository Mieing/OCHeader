@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, UILongPressGestureRecognizer, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoBaseWidget : NSObject <IESLLTempoWidgetProtocol>

@property (nonatomic) struct YGNode { } *yogaNode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } widgetFrame;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;
@property (weak, nonatomic) UITapGestureRecognizer *tap;
@property (weak, nonatomic) UILongPressGestureRecognizer *longPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)didInsertChild:(id)a0 atIndex:(long long)a1;
- (void)boundingClientRect:(id)a0 withResult:(id /* block */)a1;
- (void)handleEventWithEventName:(id)a0 eventParams:(id)a1;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didRemoveChild:(id)a0;
- (void)loadSelfMeasure;
- (void)loadBaselineFunc;
- (void)loadLayout;
- (void)layoutRemoveAllChild;
- (void)loadEventOnClick;
- (void)loadEventOnLongClick;
- (void)isExist:(id)a0 withResult:(id /* block */)a1;
- (void)loadCommonEvent;
- (void)bindTempoInfo;
- (void).cxx_destruct;
- (id)init;
- (void)removeChild:(id)a0;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
