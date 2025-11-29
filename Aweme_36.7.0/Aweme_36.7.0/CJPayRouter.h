@class NSMutableDictionary;

@interface CJPayRouter : NSObject

@property (retain, nonatomic) NSMutableDictionary *routes;

+ (void)openURL:(id)a0 withUserInfo:(id)a1 completion:(id /* block */)a2;
+ (BOOL)canOpenURL:(id)a0 matchExactly:(BOOL)a1;
+ (id)objectForURL:(id)a0 withUserInfo:(id)a1;
+ (BOOL)checkIfContainsSpecialCharacter:(id)a0;
+ (void)registerURLPattern:(id)a0 toHandler:(id /* block */)a1;
+ (void)deregisterURLPattern:(id)a0;
+ (void)registerURLPattern:(id)a0 toObjectHandler:(id /* block */)a1;
+ (BOOL)canOpenURL:(id)a0;
+ (void)openURL:(id)a0;
+ (id)sharedInstance;
+ (void)openURL:(id)a0 completion:(id /* block */)a1;
+ (id)objectForURL:(id)a0;

- (void)addURLPattern:(id)a0 andHandler:(id /* block */)a1;
- (void)removeURLPattern:(id)a0;
- (id)extractParametersFromURL:(id)a0 matchExactly:(BOOL)a1;
- (void)addURLPattern:(id)a0 andObjectHandler:(id /* block */)a1;
- (id)addURLPattern:(id)a0;
- (id)pathComponentsFromURL:(id)a0;
- (void).cxx_destruct;

@end
