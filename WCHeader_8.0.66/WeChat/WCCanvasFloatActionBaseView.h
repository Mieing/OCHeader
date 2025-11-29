@class WCCanvasComponent, WCCanvasComponentItem;

@interface WCCanvasFloatActionBaseView : MMUIView

@property (retain, nonatomic) WCCanvasComponentItem *componentItem;
@property (retain, nonatomic) WCCanvasComponent *component;
@property (nonatomic) long long orientation;

+ (id)viewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentItem:(id)a1 advertiseInfo:(id)a2 orientation:(long long)a3 delegate:(id)a4;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentItem:(id)a1 advertiseInfo:(id)a2 orientation:(long long)a3 delegate:(id)a4;
- (void)notifyComponentStatusChanged:(BOOL)a0;
- (void)notifyComponentReportAddExposureCount;
- (void)setActionViewHidden:(BOOL)a0 animation:(BOOL)a1;
- (BOOL)isComponentVisible;
- (void).cxx_destruct;

@end
