@class UIScrollView, NSMutableArray, NSString;

@interface IESGCPSegmentSliderNodeViewObserver : NSObject <IESGCPInteractScrollBinderListener>

@property (nonatomic) BOOL hadObserved;
@property (retain, nonatomic) NSMutableArray *nodeViewItems;
@property (weak, nonatomic) UIScrollView *segmentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getItemFromNodeType:(unsigned long long)a0;
- (void)binder:(id)a0 onParentScrolling:(id)a1;
- (void)calculateItemMaxY:(id)a0;
- (void)beginObserveScrollIfNeeded;
- (void)notiNodeItemAppearedChangeIfNeeded:(id)a0 currViewAppeared:(BOOL)a1 byFrameChange:(BOOL)a2;
- (BOOL)hadRegistedNodeViewType:(unsigned long long)a0;
- (void)registeSegmentSliderNodeViewItem:(id)a0;
- (void)calculateAllItemMaxY;
- (void).cxx_destruct;

@end
