@interface AWEECOMIMPageClickTask : NSObject

@property (copy, nonatomic) id /* block */ completion;

- (void)completeFailureWithActionType:(id)a0 errorMsg:(id)a1;
- (void)completeSuccessWithActionType:(id)a0;
- (void)completeFailureWithActionType:(id)a0 code:(long long)a1 errorMsg:(id)a2;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)completeWithResult:(id)a0;

@end
