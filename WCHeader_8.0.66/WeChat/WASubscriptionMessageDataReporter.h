@interface WASubscriptionMessageDataReporter : MMObject

@property (nonatomic) unsigned long long scene;

- (void)recordInfoButtonClickedAtIndex:(unsigned long long)a0 viewModel:(id)a1;
- (void)reportUserOperationWithViewModel:(id)a0;

@end
