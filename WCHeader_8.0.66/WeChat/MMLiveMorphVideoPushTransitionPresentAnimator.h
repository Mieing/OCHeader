@class NSString, UIView;

@interface MMLiveMorphVideoPushTransitionPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *videoView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL targetHasBottomView;
@property (retain, nonatomic) UIView *micUserView;
@property (retain, nonatomic) UIView *micUserBackContainerView;
@property (retain, nonatomic) UIView *audioRoomView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
