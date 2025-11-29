@class UILongPressGestureRecognizer, WCFinderAggregatedBulletView, WCFinderBulletItem, NSMutableSet, NSString, WCFinderBulletGroupViewModel, NSMutableArray;
@protocol WCFinderBulletGroupViewDelegate;

@interface WCFinderBulletGroupView : UIView <CAAnimationDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderBulletGroupViewModel *viewModel;
@property (retain, nonatomic) NSMutableArray *reusePool;
@property (retain, nonatomic) WCFinderAggregatedBulletView *aggregatedBulletView;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (nonatomic) double preWidth;
@property (nonatomic) double defaultBulletTopPadding;
@property (nonatomic) double willDisplayDate;
@property (retain, nonatomic) NSMutableSet *exposureItems;
@property (weak, nonatomic) WCFinderBulletItem *lastTapItem;
@property (weak, nonatomic) id<WCFinderBulletGroupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setConfig:(id)a0 contentVM:(id)a1 commentScene:(int)a2;
- (void)setVideoDuration:(double)a0;
- (void)setPlayRate:(double)a0;
- (void)addItems:(id)a0;
- (void)insertItemImmediately:(id)a0;
- (void)insertItemToWaitingArray:(id)a0;
- (void)deleteItem:(id)a0;
- (void)stop;
- (void)clearAllShowingItems;
- (void)clearAllAnimations;
- (id)getCache;
- (void)useCache:(id)a0;
- (void)updateInPoint:(double)a0;
- (void)fetchDataWithTimestamp:(double)a0 needCommentIds:(id)a1;
- (void)_displayView:(id)a0 inLine:(long long)a1 point:(double)a2;
- (void)_updateAggregatedBulletWithPoint:(double)a0;
- (void)_layoutAggregatedBulletView;
- (void)updateExistingItemLikeCount:(id)a0;
- (void)_addAnimationForView:(id)a0 inPosition:(double)a1;
- (void)onTap:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)getTapBulletTextViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)onLongPress:(id)a0;
- (void)unSelectLastTapItem;
- (BOOL)isBulletAnimating;
- (void)willBeginDisplay;
- (void)didEndDisplay;
- (id)_viewForItem:(id)a0;
- (id)_dequeueReusableTextView;
- (void)_enqueueReusableTextView:(id)a0;
- (void)enumerateBulletViewUsingBlock:(id /* block */)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;

@end
