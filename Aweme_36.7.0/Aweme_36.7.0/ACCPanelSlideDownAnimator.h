@class NSString, UIView;
@protocol ACCPanelViewProtocol;

@interface ACCPanelSlideDownAnimator : NSObject <ACCPanelAnimator>

@property (nonatomic) double duration;
@property (nonatomic) double targetAnimationHeight;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<ACCPanelViewProtocol> target;
@property (retain, nonatomic) UIView *targetView;
@property (copy, nonatomic) id /* block */ animationWillStart;
@property (copy, nonatomic) id /* block */ animationDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animate;
- (void).cxx_destruct;

@end
