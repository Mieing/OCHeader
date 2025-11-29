@class NSMutableDictionary;

@interface AWEMRSubscribeCounterMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;

- (void)registerCounterForKey:(id)a0 observer:(id)a1;
- (void)increaseCounterForKey:(id)a0;
- (void)decreaseCounterForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
