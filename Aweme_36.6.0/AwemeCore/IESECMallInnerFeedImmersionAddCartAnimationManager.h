@class CALayer, NSString, UIView;

@interface IESECMallInnerFeedImmersionAddCartAnimationManager : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIView *cartView;
@property (retain, nonatomic) CALayer *animationRedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } cartStartPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
