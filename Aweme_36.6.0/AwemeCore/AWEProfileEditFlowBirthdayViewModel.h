@class NSDate;

@interface AWEProfileEditFlowBirthdayViewModel : AWEProfileEditFlowStepViewModel

@property (copy, nonatomic) NSDate *lastSelectedDate;
@property (copy, nonatomic) NSDate *selectedDate;

- (id)trackFlowType;
- (Class)stepViewClass;
- (BOOL)p_needSubmitChanges;
- (void).cxx_destruct;
- (id)impressionEvent;
- (id)init;
- (void)finishWithCompletion:(id /* block */)a0;

@end
