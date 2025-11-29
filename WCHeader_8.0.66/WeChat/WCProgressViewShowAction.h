@interface WCProgressViewShowAction : WCProgressViewBaseAction

@property (nonatomic) long long currentStepMode;
@property (readonly, copy, nonatomic) id /* block */ progress;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) id /* block */ text;
@property (readonly, copy, nonatomic) id /* block */ stepMode;

@end
