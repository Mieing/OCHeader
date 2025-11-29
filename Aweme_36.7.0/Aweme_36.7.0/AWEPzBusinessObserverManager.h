@class NSString, NSMutableArray;

@interface AWEPzBusinessObserverManager : NSObject <AWEPzDataManagerProtocol>

@property (retain, nonatomic) NSMutableArray *observerArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)setupConfigs;
- (void)instantAllObserverWithConfigs:(id)a0;
- (void)registerObserverWithConfig:(id)a0 toArray:(id)a1;
- (void)domainConfigDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
