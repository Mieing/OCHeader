@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, IESLLTempoScrollView, UIView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoScrollViewWidget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (weak, nonatomic) IESLLTempoScrollView *nodeView;
@property (nonatomic) struct CGPoint { double x; double y; } lastContentOffset;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)childrenNoShrink;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadScrollAttribute;
- (void)loadScrollEvent;
- (void)dispatchScrollEvent:(id)a0 withScrollView:(id)a1;
- (void)setupScrollEventHandler:(id)a0;
- (void)scrollTo:(id)a0 withResult:(id /* block */)a1;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
