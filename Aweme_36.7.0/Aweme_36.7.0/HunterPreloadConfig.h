@class NSString, NSArray;

@interface HunterPreloadConfig : NSObject

@property (copy, nonatomic) NSString *bulletSchema;
@property (nonatomic) BOOL manualTrigger;
@property (copy, nonatomic) NSArray *preloadItems;

+ (id)tryConvertFrom:(id)a0;
+ (id)createPreloadItemWith:(id)a0;

- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
