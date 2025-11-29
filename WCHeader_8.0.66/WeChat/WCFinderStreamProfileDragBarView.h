@class UIPanGestureRecognizer, NSString, UIView;
@protocol WCFinderSteramProfileBarViewInterface, WCFinderStreamProfileDragBarViewDelegate;

@interface WCFinderStreamProfileDragBarView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView<WCFinderSteramProfileBarViewInterface> *barView;
@property (nonatomic) double dragExpandHeight;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *outerPanGesture;
@property (nonatomic) BOOL isExpand;
@property (nonatomic) BOOL isExpandMax;
@property (nonatomic) BOOL isExpandingState;
@property (nonatomic) double beginDragY;
@property (nonatomic) double previousPanPositionY;
@property (nonatomic) double viewTopAtPanBegin;
@property (nonatomic) BOOL draggingClose;
@property (nonatomic) BOOL draggingBeginOnExpandArea;
@property (nonatomic) struct CGPoint { double x; double y; } draggingScrollViewOffset;
@property (nonatomic) double expandMinHeight;
@property (nonatomic) double expandMaxHeight;
@property (nonatomic) double pointExpandMax;
@property (nonatomic) double pointExpandMin;
@property (nonatomic) double displayDragCloseStyleProgress;
@property (weak, nonatomic) id<WCFinderStreamProfileDragBarViewDelegate> delegate;
@property (nonatomic) double displayCloseStyleDragDistance;
@property (weak, nonatomic) UIView *fullScreenView;
@property (weak, nonatomic) UIView *moveView;
@property (nonatomic) BOOL supportExpand;
@property (nonatomic) BOOL displayDragCloseStyle;
@property (nonatomic) BOOL enable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWidth:(double)a0 blankHeight:(double)a1 dragExpandHeight:(double)a2;
- (id)initWithWidth:(double)a0 blankHeight:(double)a1 dragExpandHeight:(double)a2 type:(long long)a3;
- (void)initBarViewWithType:(long long)a0;
- (void)layoutSubviews;
- (void)updateBarBGColor:(id)a0 arrowColor:(id)a1;
- (void)updateDisplayDragCloseStyle;
- (void)doLayoutBarView;
- (void)handlePan:(id)a0;
- (void)handlePanGestureBegin;
- (void)handleDragBarGestureChange:(double)a0;
- (void)handleDragBarGestureEnd:(struct CGPoint { double x0; double x1; })a0;
- (void)setupScrollView:(id)a0;
- (void)setupScrollView:(id)a0 orMainView:(id)a1;
- (void)handleTableViewPanGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void).cxx_destruct;

@end
