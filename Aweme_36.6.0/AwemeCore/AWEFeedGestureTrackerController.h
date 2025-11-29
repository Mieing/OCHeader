@class NSString, AWEAwemeModel;

@interface AWEFeedGestureTrackerController : AWEBaseController <AWEFeedControllerProtocol>

@property (nonatomic) BOOL isDragFromInteractionContainer;
@property (nonatomic) struct CGPoint { double x; double y; } slideActionBeginDraggingPoint;
@property (nonatomic) struct CGPoint { double x; double y; } slideActionEndDraggingPoint;
@property (nonatomic) double xSlideBeginPointPercent;
@property (nonatomic) double ySlideBeginPointPercent;
@property (retain, nonatomic) AWEAwemeModel *slideActionBeginDraggingAweme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
