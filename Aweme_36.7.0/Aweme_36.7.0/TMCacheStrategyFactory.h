@class NSMutableDictionary;

@interface TMCacheStrategyFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *globalStategties;

+ (id)getStrategy:(id)a0 params:(id)a1;
+ (id)sharedFactory;

- (id)getStrategy:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
