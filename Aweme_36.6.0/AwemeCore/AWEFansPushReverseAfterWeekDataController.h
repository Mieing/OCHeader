@interface AWEFansPushReverseAfterWeekDataController : AWEListDataController

@property (nonatomic) long long total;

- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
