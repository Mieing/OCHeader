@class NSArray;

@interface RxApplicationDelegate : RxBaseApplicationDelegate

@property (copy, nonatomic) NSArray *__applicationModules;

- (void)rxAwakeFromPropertyInjection;
- (id)applicationModules;
- (void).cxx_destruct;
- (id)init;

@end
