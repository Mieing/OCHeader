@class MMFinderLiveFeedStreamBarrageItem, NSString, MMLiveTaskId, MMFinderLiveFeedStreamBarrageViewModel, MMFinderLiveFeedStreamBarrageConfig, NSMutableArray;
@protocol MMFinderLiveFeedStreamBarrageCommentViewDelegate;

@interface MMFinderLiveFeedStreamBarrageCommentView : UIView <MMFinderLiveFeedStreamBarrageViewModelDelegate>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveFeedStreamBarrageViewModel *viewModel;
@property (retain, nonatomic) MMFinderLiveFeedStreamBarrageConfig *config;
@property (retain, nonatomic) NSMutableArray *lines;
@property (nonatomic) double lastWidth;
@property (weak, nonatomic) MMFinderLiveFeedStreamBarrageItem *lastTapItem;
@property (weak, nonatomic) id<MMFinderLiveFeedStreamBarrageCommentViewDelegate> delegate;
@property (readonly, nonatomic) double perferHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)reset;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)updateFeedStreamTaskId:(id)a0;
- (void)resetFeedStreamTaskId;
- (void)start;
- (void)stop;
- (void)unSelectLastTapItem;
- (void)calcItemInfo:(id)a0;
- (void)clearAllItems;
- (void)deleteItem:(id)a0;
- (void)clearAllShowingItems;
- (void)clearAllAnimations;
- (void)addItemView:(id)a0 withLineIndex:(long long)a1;
- (void)addAnimationForItem:(id)a0 duration:(double)a1;
- (void)stopAnimationForItem:(id)a0;
- (void)recoverAnimationForItem:(id)a0;
- (id)getTapBarrageTextViewWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectTapItem:(id)a0;
- (BOOL)enableTouchAction;
- (void)onTap:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)barrageCommentViewContainer;
- (BOOL)tryDisplayItem:(id)a0;
- (void)onLiveFeedStreamCloseBarrageAction;
- (void).cxx_destruct;

@end
