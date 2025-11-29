@class NSString, GameMultiOptionItem;

@interface GameDebugConfigManager : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) GameMultiOptionItem *gameWkInterceptOptionItem;
@property (retain, nonatomic) GameMultiOptionItem *loadHtmlOptionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (BOOL)setBool:(BOOL)a0 forKey:(id)a1;
- (BOOL)getBoolForKey:(id)a0;
- (id)getStringForKey:(id)a0;
- (BOOL)measurePerformance;
- (void).cxx_destruct;

@end
