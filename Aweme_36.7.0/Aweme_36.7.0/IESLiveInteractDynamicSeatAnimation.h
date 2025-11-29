@class NSString, NSDictionary, UIView;
@protocol IESLiveInteractSeatProvider;

@interface IESLiveInteractDynamicSeatAnimation : NSObject <CAAnimationDelegate>

@property (weak, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSDictionary *info;
@property (nonatomic) BOOL disableAnimate;
@property (copy, nonatomic) NSString *itemId;
@property (weak, nonatomic) UIView<IESLiveInteractSeatProvider> *seat;
@property (copy, nonatomic) id /* block */ willUpdateBlock;
@property (copy, nonatomic) id /* block */ didUpdateBlock;
@property (copy, nonatomic) id /* block */ didStartBlock;
@property (copy, nonatomic) id /* block */ didFinishedBlock;
@property (copy, nonatomic) id /* block */ willUpdateViewAction;
@property (copy, nonatomic) id /* block */ didUpdateViewAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })parsePoint:(id)a0;
- (void)excute;
- (void)animationDidStart:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
