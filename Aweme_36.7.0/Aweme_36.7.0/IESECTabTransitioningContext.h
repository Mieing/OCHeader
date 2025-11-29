@class IESECSlidingViewElementWrapper;

@interface IESECTabTransitioningContext : NSObject

@property (retain, nonatomic) IESECSlidingViewElementWrapper *fromTabViewElement;
@property (retain, nonatomic) IESECSlidingViewElementWrapper *toTabViewElement;
@property (nonatomic) long long nextIndex;
@property (nonatomic) BOOL needsCancelTransition;

- (void).cxx_destruct;

@end
