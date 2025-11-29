@class AWESearchAIGCExpandPanelElement;

@interface AWESearchAIGCInputAddPanelView : UIView

@property (retain, nonatomic) AWESearchAIGCExpandPanelElement *albumElement;
@property (retain, nonatomic) AWESearchAIGCExpandPanelElement *cameraElement;
@property (copy, nonatomic) id /* block */ didSelectElement;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateSubviews;

@end
