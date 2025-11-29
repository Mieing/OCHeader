@class NSMutableDictionary;

@interface BDMannorSceneManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;

+ (id)sharedInstance;

- (void)unregisterAdContenxt:(id)a0;
- (void)registerAdContext:(id)a0 contextHandler:(id /* block */)a1;
- (id)layoutContextForScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
