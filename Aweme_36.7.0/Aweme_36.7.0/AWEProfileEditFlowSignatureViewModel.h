@class NSString;

@interface AWEProfileEditFlowSignatureViewModel : AWEProfileEditFlowStepViewModel

@property (copy, nonatomic) NSString *enteredSignature;

- (id)trackFlowType;
- (Class)stepViewClass;
- (BOOL)p_needSubmitChanges;
- (void).cxx_destruct;
- (id)impressionEvent;
- (void)finishWithCompletion:(id /* block */)a0;

@end
