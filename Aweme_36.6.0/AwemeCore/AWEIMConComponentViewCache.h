@class NSDictionary, NSMutableDictionary;

@interface AWEIMConComponentViewCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (copy, nonatomic) NSDictionary *limitCountConfig;

- (void)p_trimWithDefault:(long long)a0;
- (id)viewForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)setView:(id)a0 forKey:(id)a1;
- (id)initWithConfig:(id)a0;

@end
