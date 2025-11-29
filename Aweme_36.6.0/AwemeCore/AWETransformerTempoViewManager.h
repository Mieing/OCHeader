@class NSMutableDictionary, _TtC8TempoiOS11TempoEngine;

@interface AWETransformerTempoViewManager : NSObject

@property (retain, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (retain, nonatomic) NSMutableDictionary *tempoViewCache;

+ (void)preloadTempoTemplateIfNeeded;
+ (id)tempoViewCacheKeyWithCardType:(long long)a0 scene:(long long)a1;
+ (id)sharedInstance;

- (id)tempoCacheViewWithCardType:(long long)a0 scene:(long long)a1;
- (void)fetchTempoViewWithTemplateURL:(id)a0 cardType:(long long)a1 scene:(long long)a2 data:(id)a3 constraintWidth:(double)a4 completion:(id /* block */)a5;
- (void)inner_preloadTempoTemplateURLs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeCache:(id)a0;
- (void)setupEngine;

@end
