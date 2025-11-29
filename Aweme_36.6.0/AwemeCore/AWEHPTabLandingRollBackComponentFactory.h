@class NSMutableDictionary;

@interface AWEHPTabLandingRollBackComponentFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *configToComponent;

+ (id)sharedInstance;

- (id)getRollBackButtonWithConfig:(id)a0;
- (void)registerAllRollBackComponent;
- (id)getRollBackComponentWithConfig:(id)a0;
- (void)registerComponentWithConfigClass:(Class)a0 componentClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;

@end
