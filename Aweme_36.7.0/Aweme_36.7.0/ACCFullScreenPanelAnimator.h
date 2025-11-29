@class NSString, UIView;
@protocol ACCPanelViewProtocol;

@interface ACCFullScreenPanelAnimator : NSObject <ACCPanelAnimator>

@property (nonatomic) double animateInDuration;
@property (nonatomic) double animateOutDuration;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<ACCPanelViewProtocol> target;
@property (retain, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) id /* block */ animationWillStart;
@property (copy, nonatomic) id /* block */ animationDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAnimationType:(unsigned long long)a0;
- (void)animate;
- (void).cxx_destruct;
- (void)animateIn;
- (void)animateOut;

@end
