@class UILongPressGestureRecognizer, NSString, DVEMultipleTrackView, UIView, DVESegmentClipView;
@protocol DVERootViewControllerProtocol;

@interface DVEMultipleTrackLongPressHandler : NSObject <UIGestureRecognizerDelegate>

@property (weak, nonatomic) DVEMultipleTrackView *multipleTrackView;
@property (weak, nonatomic) id<DVERootViewControllerProtocol> rootViewService;
@property (retain, nonatomic) UIView *deskView;
@property (retain, nonatomic) DVESegmentClipView *borderView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } availableInsertTimeRange;
@property (nonatomic) long long insertTargetSection;
@property (retain, nonatomic) UIView *alphaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaContext;
- (double)minOffsetBetweenSourcePoints:(id)a0 targetPoints:(id)a1;
- (BOOL)inMoveLimitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToRootView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDeskViewWithMovingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gesture:(id)a1;
- (void)longPressBeginWithGesture:(id)a0;
- (void)longPressChangedWithGesture:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 hPosition:(struct CGPoint { double x0; double x1; })a2 vPosition:(struct CGPoint { double x0; double x1; })a3;
- (void)longPressEndWithGesture:(id)a0;
- (void)resetLongPressStatus;
- (void)setupLongPressSnapCellWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLongPressSnapCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isNewInsert;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })longPressCellFrameInMultipleTrackView;
- (void)setupLongPressGestureIn:(id)a0;
- (void)handleLongPress:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
