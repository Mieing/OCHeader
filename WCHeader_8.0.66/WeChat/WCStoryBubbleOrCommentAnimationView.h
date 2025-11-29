@class NSArray, NSSet, NSString, UIView;
@protocol WCStoryBubbleOrCommentAnimationViewDelegate;

@interface WCStoryBubbleOrCommentAnimationView : UIView <WCStoryBubbleHeadViewDelegate>

@property (retain, nonatomic) NSArray *itemList;
@property (nonatomic) BOOL isFirstTimeShow;
@property (retain, nonatomic) UIView *movingView;
@property (nonatomic) long long displayItemIndex;
@property (retain, nonatomic) NSSet *unreadCommentIdSet;
@property (nonatomic) BOOL isInBackground;
@property (nonatomic) double itemMoveingVelocity;
@property (weak, nonatomic) id<WCStoryBubbleOrCommentAnimationViewDelegate> delegate;
@property (nonatomic) BOOL isBubble;
@property (nonatomic) BOOL movingViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (double)appearAnimationTime;
- (double)blurEffectExtendAnimationDelayTime;
- (double)blurEffectExtendAnimationTime;
- (double)movingAnimationDelayTime;
- (double)movingAnimationTime;
- (double)wordExtendAnimationDelayTime;
- (double)wordExtendAnimationTime;
- (double)disppearAnimationDelayTime;
- (double)disppearAnimationTime;
- (double)animationTimeInAll;
- (void)showItemList:(id)a0 unreadCommentIdSet:(id)a1;
- (double)getNextIntervalForCurrentIndex:(unsigned long long)a0;
- (void)stopAnimations;
- (void)setMovingViewHidden:(BOOL)a0;
- (BOOL)movingViewHidden;
- (void)showItems;
- (void)showSingleHeadView:(id)a0;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)storyBubbleHeadViewClickCommentView:(id)a0;
- (void).cxx_destruct;

@end
