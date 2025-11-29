@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, UIView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoSwiperWidget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

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

+ (BOOL)isSelfMeasure;
+ (BOOL)childrenNoShrink;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)didInsertChild:(id)a0 atIndex:(long long)a1;
- (void)handleEventWithEventName:(id)a0 eventParams:(id)a1;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didRemoveChild:(id)a0;
- (void)scrollTo:(id)a0 withResult:(id /* block */)a1;
- (long long)findIndexOfChild:(id)a0;
- (void)currentIndex:(id)a0 withResult:(id /* block */)a1;
- (id)createView;
- (id)nodeView;

@end
