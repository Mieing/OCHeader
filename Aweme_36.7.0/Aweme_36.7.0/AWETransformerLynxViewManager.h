@class NSMutableDictionary;

@interface AWETransformerLynxViewManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sceneDict;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)lynxViewWithCardType:(long long)a0 scene:(long long)a1;
- (void)cacheLynxView:(id)a0 scene:(long long)a1 cardType:(long long)a2;
- (id)cacheKeyWithScene:(long long)a0 cardType:(long long)a1;
- (id)lynxViewsWithScene:(long long)a0;
- (void)clearCacheWithScene:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
