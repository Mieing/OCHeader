@class NSMutableDictionary;

@interface AWEProfileTabListRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *type2ProviderDictionary;

- (id)tabViewControllerForType:(long long)a0;
- (id)tabNameForLogWithType:(long long)a0;
- (id)profileTabModelForType:(long long)a0;
- (BOOL)shouldShowForType:(long long)a0;
- (id)providerForType:(long long)a0;
- (void)registProvider:(id)a0;
- (void).cxx_destruct;

@end
