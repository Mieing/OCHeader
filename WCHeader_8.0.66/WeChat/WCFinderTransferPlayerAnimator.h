@class WCFinderDataItem, NSString, WCPlayerView;
@protocol WCFinderTransferPlayerDelegate;

@interface WCFinderTransferPlayerAnimator : NSObject <WCFinderTrailingAnimator>

@property (retain, nonatomic) WCPlayerView *enterPlayerView;
@property (retain, nonatomic) WCFinderDataItem *enterDataItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } enterPlayerFrame;
@property (weak, nonatomic) id<WCFinderTransferPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlayer:(id)a0 forDataItem:(id)a1 globalDisplayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)beforeAnimation:(id)a0 takeVideoPlayer:(id)a1;
- (void)startAnimation:(id)a0;
- (void)beforeExpandAnimation:(id)a0 playerView:(id)a1;
- (void)startExpandAnimation:(id)a0;
- (void)onAnimationComplete:(BOOL)a0 context:(id)a1;
- (void)onExpandAnimationComplete:(BOOL)a0 context:(id)a1;
- (void)beforeClosureAnimation:(id)a0 playerView:(id)a1;
- (void)startClosureAnimation:(id)a0;
- (void)onClosureAnimationComplete:(BOOL)a0 context:(id)a1;
- (BOOL)shouldDragDownAsCard;
- (BOOL)shouldGestureClosureAsCard;
- (id)enterPassPlayerTid;
- (BOOL)closureTakePlayer;
- (id)chooseAnimatorWithOther:(id /* block */)a0 context:(id)a1;
- (void).cxx_destruct;

@end
