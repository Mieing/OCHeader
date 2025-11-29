@class NSMutableDictionary;

@interface TMCacheStoreFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *globalStores;

+ (id)getStore:(id)a0;
+ (id)sharedFactory;

- (id)getStore:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
