@class NSString, NSArray, BDXPreloadStrategy;

@interface BDXRLPreloadConfig : NSObject

@property (copy, nonatomic) NSString *bulletSchema;
@property (nonatomic) BOOL manualTrigger;
@property (copy, nonatomic) NSArray *preloadItems;
@property (retain, nonatomic) BDXPreloadStrategy *strategy;

+ (id)tryConvertFrom:(id)a0 strategy:(id)a1;
+ (unsigned long long)itemTypeWithString:(id)a0;
+ (id)createPreloadItemWith:(id)a0 strategy:(id)a1;
+ (id)createGurdPreloadItemsWith:(id)a0 strategy:(id)a1;

- (id)initWith:(id)a0 strategy:(id)a1;
- (void).cxx_destruct;

@end
