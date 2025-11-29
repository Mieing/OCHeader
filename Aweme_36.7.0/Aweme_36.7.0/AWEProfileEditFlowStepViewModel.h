@class AWEProfileEditFlowViewModel;

@interface AWEProfileEditFlowStepViewModel : NSObject

@property (weak, nonatomic) AWEProfileEditFlowViewModel *flowViewModel;
@property (nonatomic) long long status;

- (BOOL)isLastStep;
- (id)trackFlowType;
- (void)trackImpression;
- (Class)stepViewClass;
- (BOOL)isFirstStep;
- (void)trackCloseByClickBlank:(BOOL)a0;
- (void).cxx_destruct;
- (id)impressionEvent;
- (long long)index;
- (void)finishWithCompletion:(id /* block */)a0;

@end
