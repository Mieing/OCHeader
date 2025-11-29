@class NSArray;

@interface IESLivePaidStreamInteractionAuthConfig : NSObject

@property (nonatomic) long long paidScene;
@property (copy, nonatomic) NSArray *serverControlInteractions;
@property (copy, nonatomic) NSArray *authDisabledInteractionsWhenTrial;
@property (copy, nonatomic) NSArray *authDisabledInteractionsWhenTrialFinish;

- (void).cxx_destruct;

@end
