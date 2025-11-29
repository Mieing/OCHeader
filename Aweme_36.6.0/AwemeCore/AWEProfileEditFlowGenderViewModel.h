@interface AWEProfileEditFlowGenderViewModel : AWEProfileEditFlowStepViewModel

@property (nonatomic) long long lastSelectedGenderType;
@property (nonatomic) long long genderType;

- (id)trackFlowType;
- (Class)stepViewClass;
- (id)impressionEvent;
- (void)finishWithCompletion:(id /* block */)a0;

@end
