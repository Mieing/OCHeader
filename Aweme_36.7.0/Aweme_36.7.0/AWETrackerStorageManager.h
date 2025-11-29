@interface AWETrackerStorageManager : NSObject

@property (copy, nonatomic) id /* block */ boolGetter;
@property (copy, nonatomic) id /* block */ boolSetter;
@property (copy, nonatomic) id /* block */ objGetter;
@property (copy, nonatomic) id /* block */ objSetter;

+ (id)actualKey:(id)a0;
+ (void)setupBoolGetter:(id /* block */)a0 setter:(id /* block */)a1;
+ (void)setupObjGetter:(id /* block */)a0 setter:(id /* block */)a1;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)sharedInstance;
+ (void)setObject:(id)a0 forKey:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
