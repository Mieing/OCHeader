@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAIEnhanceFeatureCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *cacheDict;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)jsonString;

@end
