@interface BDPLynxComponentTrackerHelper : NSObject

+ (void)trackComponentRender:(id)a0 uniqueID:(id)a1 andParam:(id)a2;
+ (void)trackComponentAPISuccess:(id)a0 uniqueID:(id)a1 andParam:(id)a2;
+ (void)trackComponentAPIFail:(id)a0 uniqueID:(id)a1 andParam:(id)a2 error:(id)a3;
+ (void)trackComponentAPI:(id)a0 uniqueID:(id)a1 andParam:(id)a2 error:(id)a3;
+ (id)apiDicFrom:(id)a0 error:(id)a1;
+ (void)trackComponentAPICancel:(id)a0 uniqueID:(id)a1 andParam:(id)a2 error:(id)a3;

@end
