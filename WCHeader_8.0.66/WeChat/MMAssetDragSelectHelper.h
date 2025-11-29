@class UITableView, NSString, NSMutableSet, UIPanGestureRecognizer, UILongPressGestureRecognizer;
@protocol MMAssetDragSelectDelegate;

@interface MMAssetDragSelectHelper : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) unsigned long long autoAnimState;
@property (retain, nonatomic) NSMutableSet *multiSelectSet;
@property (nonatomic) BOOL canPanGestureBegin;
@property (nonatomic) BOOL canPanGestureChange;
@property (nonatomic) BOOL isPicking;
@property (nonatomic) BOOL doSelect;
@property (nonatomic) struct CGPoint { double x; double y; } beginPoint;
@property (nonatomic) struct CGPoint { double x; double y; } touchPoint;
@property (weak, nonatomic) id<MMAssetDragSelectDelegate> delegate;
@property (nonatomic) long long maxCount;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWith:(id)a0;
- (void)dealloc;
- (void)handleLongPressGesture:(id)a0;
- (BOOL)isLongPressGestureActive;
- (void)handlePanGesture:(id)a0;
- (void)multiSelectBegin:(BOOL)a0;
- (void)multiSelectHold;
- (void)multiSelectCancel;
- (void)updateAutoScrollState;
- (void)doTopEdgeScrollAnimation;
- (void)doBottomEdgeScrollAnimation;
- (void)doScrollAnimation:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelScrollAnimation;
- (id)multiSelectArray:(id)a0 endIndex:(id)a1;
- (id)genArrayWith:(unsigned long long)a0 endValue:(unsigned long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
