@class AWEPOITempoPOITagsInfoView, NSArray, IESLLTempoContext, IESLLTempoAnimationContext, UIView, NSMutableArray, NSString;
@protocol IESLLTempoNodeProtocol, IESLLTempoWidgetProtocol;

@interface AWEPOITempoPOITagsInfoWidget : IESLLTempoBaseWidget <IESLLTempoWidgetProtocol>

@property (weak, nonatomic) AWEPOITempoPOITagsInfoView *nodeView;
@property (copy, nonatomic) NSArray *tagModels;
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
+ (id)getTagsByLoadTagAttrs:(id)a0 widgetWidth:(long long)a1;
+ (id)tagName;

- (void)layoutDidFinished;
- (void)propsDidUpdate;
- (void)initializeWidget;
- (void)frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })selfMeasureWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (void)loadWidgetUI;
- (void)loadWidgetEvent;
- (void).cxx_destruct;
- (id)createView;

@end
