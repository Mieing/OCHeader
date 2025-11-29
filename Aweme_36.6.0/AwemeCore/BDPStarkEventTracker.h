@interface BDPStarkEventTracker : NSObject

+ (void)monitorService:(id)a0 extra:(id)a1 uniqueId:(id)a2;
+ (id)getCommonParamsWithUniqueID:(id)a0;
+ (void)event:(id)a0 attributes:(id)a1 uniqueId:(id)a2;
+ (void)beginEvent:(id)a0 primaryKey:(id)a1 attributes:(id)a2 uniqueId:(id)a3;
+ (void)endEvent:(id)a0 primaryKey:(id)a1 attributes:(id)a2 uniqueId:(id)a3;

@end
