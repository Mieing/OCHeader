@class NSMutableDictionary;

@interface HybridGlobalContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextMap;

+ (id)contextWithBid:(id)a0;
+ (id)mergeContext:(id)a0 withBid:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
