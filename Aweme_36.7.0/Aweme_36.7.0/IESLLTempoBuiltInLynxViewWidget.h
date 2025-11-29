@class IESLLTempoAnimationContext, NSString, IESLLTempoBuiltInLynxView, IESLLTempoContext, UIView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLTempoBuiltInLynxViewWidget : IESLLTempoBaseWidget <IESLLTempoBuiltInLynxViewDelegate, IESLLTempoWidgetProtocol>

@property (retain, nonatomic) IESLLTempoBuiltInLynxView *nodeView;
@property (nonatomic) struct CGSize { double width; double height; } lynxViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLLTempoNodeProtocol> node;
@property (retain, nonatomic) UIView *renderView;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoWidgetProtocol> parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) IESLLTempoAnimationContext *animationContext;
@property (nonatomic) double timeSincePause;
@property (copy, nonatomic) NSString *animationPlayState;

+ (BOOL)isSelfMeasure;
+ (id)tagName;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 didRecieveError:(id)a1;
- (void)layoutDidFinished;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)createView;

@end
