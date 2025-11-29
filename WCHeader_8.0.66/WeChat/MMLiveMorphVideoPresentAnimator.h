@class NSString, UIView;

@interface MMLiveMorphVideoPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceFrame;
@property (retain, nonatomic) UIView *videoView;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) BOOL targetHasBottomView;
@property (retain, nonatomic) UIView *micUserView;
@property (retain, nonatomic) UIView *micUserBackContainerView;
@property (retain, nonatomic) UIView *audioRoomView;
@property (nonatomic) BOOL hasScaledAudioRoomView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
