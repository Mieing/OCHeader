@class NSString, NSMutableDictionary;

@interface AWEFeatureBlockContext : NSObject <AWEFeatureContext>

@property (retain) NSMutableDictionary *blockMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContextBlock:(id /* block */)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)allKeys;

@end
