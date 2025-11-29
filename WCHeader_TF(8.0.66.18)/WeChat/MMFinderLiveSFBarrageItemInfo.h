@class MMFinderLiveSFBarrageCellView, MMFinderLiveSFBarrageSingleTrackInfo;

@interface MMFinderLiveSFBarrageItemInfo : NSObject

@property (retain, nonatomic) MMFinderLiveSFBarrageCellView *barrageCell;
@property (weak, nonatomic) MMFinderLiveSFBarrageSingleTrackInfo *rootTrackInfo;
@property (nonatomic) unsigned long long barrageSeqNum;
@property (nonatomic) unsigned long long moveAnimType;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double fullyVisibleTime;
@property (nonatomic) double animateSpeed;
@property (nonatomic) struct CGPoint { double x; double y; } animationStartPos;
@property (nonatomic) double animationStartTime;
@property (nonatomic) BOOL isOffScreenMode;
@property (copy, nonatomic) id /* block */ didTapBlock;
@property (copy, nonatomic) id /* block */ actionInvokeBlock;
@property (copy, nonatomic) id /* block */ autoRecoverUnTappedBlock;
@property (copy, nonatomic) id /* block */ getSingleEnableCommentBlock;
@property (copy, nonatomic) id /* block */ tappedStateChangeCallback;
@property (copy, nonatomic) id /* block */ movingCompletion;
@property (nonatomic) BOOL isInTappedState;
@property (nonatomic) BOOL isInDisappearState;

- (id)initWithBarrageCell:(id)a0;
- (void)dealloc;
- (void)removeMovingAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentationFrame;
- (BOOL)isActualStartMovingAnimation;
- (void).cxx_destruct;

@end
