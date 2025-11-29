@class NSMutableDictionary;

@interface BDXGlobalContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *contextMap;

+ (id)contextWithBid:(id)a0;
+ (id)getContexWithoutDefaulttWithBid:(id)a0 create:(BOOL)a1;
+ (id)getContextWithBid:(id)a0 create:(BOOL)a1;
+ (id)contextWithBid:(id)a0 create:(BOOL)a1;
+ (id)mergeContext:(id)a0 withBid:(id)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
