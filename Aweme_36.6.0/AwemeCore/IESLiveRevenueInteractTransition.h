@interface IESLiveRevenueInteractTransition : NSObject

@property (nonatomic) long long event;
@property (nonatomic) long long targetState;
@property (copy, nonatomic) id /* block */ condition;

- (void).cxx_destruct;

@end
