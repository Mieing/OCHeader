@class IESLLPOITempoPOINameHeadTagsView;

@interface IESLLPOITempoPOINameHeadTagsWidget : IESLLTempoBaseWidget

@property (weak, nonatomic) IESLLPOITempoPOINameHeadTagsView *nodeView;

+ (BOOL)isSelfMeasure;
+ (id)loadNameAttribute:(id)a0;
+ (id)loadTagsAttribute:(id)a0;
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
