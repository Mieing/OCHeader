@class WCCanvasComponent, WCCanvasComponentItem, NSString, WCAdvertiseInfo;
@protocol WCCanvasComponentDelegate;

@interface WCCanvasFloatScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCCanvasComponentItem *componentItem;
@property (retain, nonatomic) WCCanvasComponent *component;
@property (retain, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) id<WCCanvasComponentDelegate> componentDelegate;
@property (nonatomic) struct CGPoint { double x; double y; } beginDraggingOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentItem:(id)a1 advertiseInfo:(id)a2 orientation:(long long)a3 delegate:(id)a4;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)initComponent;
- (void)notifyComponentStatusChanged:(BOOL)a0;
- (void)notifyComponentReportAddExposureCount;
- (BOOL)didScrollViewScrollToTop;
- (void)setContentComponentFullScreen;
- (BOOL)didContainWebStoreComponent;
- (void)contentViewScrollToTop;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)didScrollViewEndDecelerating;
- (void).cxx_destruct;

@end
