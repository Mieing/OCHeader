@class AFDColorRingTableBaseDataProvider;

@interface AFDColorRingTableBaseDataHandler : NSObject

@property (weak, nonatomic) AFDColorRingTableBaseDataProvider *provider;

- (void)didPrepareDatabase;
- (void)dataSourceDidChange;
- (void).cxx_destruct;

@end
