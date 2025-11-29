@class UIView, NSString, CADisplayLink, NSArray, DVEVideoTrackPreviewView, DVEVideoSegmentView, NSDictionary, DVEMainTrackLongPressContentView, DVELongPressCursorView;
@protocol DVERootViewControllerProtocol, DVECoreVideoProtocol;

@interface DVEMainTrackLongPressGestureHandler : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic) double longPressRightEdgeThreshold;
@property (nonatomic) double longPressLeftEdgeThreshold;
@property (nonatomic) unsigned long long moveDirection;
@property (nonatomic) long long longPressIndex;
@property (nonatomic) long long currentInsertIndex;
@property (retain, nonatomic) CADisplayLink *longPressDisplayLink;
@property (retain, nonatomic) NSString *longPressSlotID;
@property (retain, nonatomic) DVEMainTrackLongPressContentView *bgContentView;
@property (retain, nonatomic) UIView *movingView;
@property (retain, nonatomic) DVELongPressCursorView *cursorView;
@property (retain, nonatomic) DVEVideoSegmentView *targetSegmentView;
@property (copy, nonatomic) NSDictionary *itemInfoViews;
@property (copy, nonatomic) NSArray *mainCacheSlots;
@property (weak, nonatomic) id<DVECoreVideoProtocol> videoEditor;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> rootViewService;
@property (weak, nonatomic) DVEVideoTrackPreviewView *videoTrackPreviewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)longPressWillStart:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (void)longPressDidChange:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (void)longPressWillEnd:(id)a0 onView:(id)a1 withSlot:(id)a2;
- (void)longPressDetectEdge:(id)a0 onView:(id)a1 increment:(double)a2;
- (void)invalidateLongPressCADisplayLink;
- (void)setupLongPressCADisplayLink;
- (void)pauseLongPressCADisplayLink;
- (void)handleLongPressEdgeIntersection;
- (void)addLongPressGestureTo:(id)a0;
- (void)showBgContentView;
- (void)showCursorView;
- (void)createMovingViewForSegmentView:(id)a0;
- (void)syncLongPressUIWithHappend:(BOOL)a0 onSlot:(id)a1;
- (void)updateMovingContentForSegmentView:(id)a0;
- (void)showMovingViewIfNeed;
- (void)removeAllLongPressEditView;
- (void)removeItemInfoViews;
- (void)removeMovingView;
- (void)removeBgContentView;
- (void)removeCursorView;
- (void)longPressAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)delegate;
- (id)viewModel;

@end
