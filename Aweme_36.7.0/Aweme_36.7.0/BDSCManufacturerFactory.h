@interface BDSCManufacturerFactory : NSObject

+ (void)removeAllManufacturer;
+ (void)registerManufacturer:(Class)a0 manufacturerInfo:(id)a1;
+ (void)registerDefaultManufacturer:(id)a0;
+ (id)manufacturerWithInfo:(id)a0;
+ (id)dictionary;

@end
