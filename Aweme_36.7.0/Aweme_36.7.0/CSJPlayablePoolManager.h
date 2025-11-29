@class NSString, NSMutableDictionary, NSMutableArray;

@interface CSJPlayablePoolManager : NSObject <CSJRewardedVideoWebViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *playablePool;
@property (retain, nonatomic) NSMutableArray *keySort;
@property (nonatomic) long long maxCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyForMaterial:(id)a0;
+ (id)sharedInstance;

- (id)playableForKey:(id)a0;
- (id)getRenderStatusFor:(id)a0;
- (void)trimAll;
- (void)storeObject:(id)a0 forKey:(id)a1;
- (void)willEvictObject:(id)a0;
- (void)removeObjectAt:(unsigned long long)a0;
- (void)render:(id)a0 slot:(id)a1 forKey:(id)a2;
- (void)bu_webviewLoadFinish:(id)a0;
- (void)playableRenderFaild:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)appDidEnterBackground:(id)a0;
- (void)trim;

@end
