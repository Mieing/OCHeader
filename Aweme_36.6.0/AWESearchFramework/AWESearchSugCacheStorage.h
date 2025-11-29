@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface AWESearchSugCacheStorage : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *sugArray;
@property (retain, nonatomic) NSMutableDictionary *sugCacheDict;
@property (copy, nonatomic) NSString *currentUid;

+ (id)sharedInstance;

- (id)getModelWithKeyword:(id)a0 type:(unsigned long long)a1;
- (void)addModel:(id)a0 keyword:(id)a1;
- (void)checkIfNeedRemoveUponSizeLimit;
- (id)fetchSugCacheWithQuery:(id)a0 uid:(id)a1 type:(unsigned long long)a2;
- (void)saveSugResultInCache:(id)a0 uid:(id)a1 withQuery:(id)a2;
- (void)removeModelByKeyword:(id)a0;
- (id)allKeywords;
- (void).cxx_destruct;
- (id)init;
- (void)resetStorage;

@end
