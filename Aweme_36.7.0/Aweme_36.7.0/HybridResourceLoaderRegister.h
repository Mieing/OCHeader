@class NSMutableDictionary;

@interface HybridResourceLoaderRegister : NSObject

@property (retain, nonatomic) NSMutableDictionary *resourceLoaderMap;

+ (id)sharedInstance;

- (void)registerHybridResourceLoader:(id)a0 WithBid:(id)a1;
- (void)unregisterResourceLoaderWithBid:(id)a0;
- (id)resourceLoaderWithBid:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
