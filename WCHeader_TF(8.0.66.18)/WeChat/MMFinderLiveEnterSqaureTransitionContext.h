@class MMFinderLiveHomePageBottomPlayerView, UIImageView, UIView;

@interface MMFinderLiveEnterSqaureTransitionContext : MMFinderLiveTransitionContext

@property (nonatomic) double duration;
@property (retain, nonatomic) MMFinderLiveHomePageBottomPlayerView *playerBottomView;
@property (retain, nonatomic) UIView *playerControlView;
@property (weak, nonatomic) UIView *liveView;
@property (weak, nonatomic) UIView *navBar;
@property (retain, nonatomic) UIImageView *snapshotLiveView;
@property (weak, nonatomic) UIView *liveRoomView;
@property (retain, nonatomic) UIImageView *snapshotLiveViewVideoContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialPlayerBottomViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialLiveFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalPlayerBottomViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalLiveFrame;
@property (nonatomic) double snapshotLiveViewTopOffset;
@property (weak, nonatomic) UIView *transitionToView;
@property (nonatomic) BOOL isGesturePanEnter;

- (id)description;
- (void).cxx_destruct;

@end
