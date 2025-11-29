@class IESLLTempoAnimationContext, NSString, IESLLTempoContext, UIView, IESLLPOITempoAddressInfoView, NSMutableArray;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface IESLLPOITempoAddressInfoWidget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (weak, nonatomic) IESLLPOITempoAddressInfoView *nodeView;
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

+ (id)loadAttribute:(id)a0;
+ (BOOL)isSelfMeasure;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)loadEvent;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void)dispatchEvent:(id)a0;
- (void).cxx_destruct;
- (id)createView;

@end
