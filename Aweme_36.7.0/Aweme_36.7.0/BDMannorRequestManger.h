@interface BDMannorRequestManger : NSObject

+ (void)request:(id)a0 callback:(id /* block */)a1;
+ (void)request:(id)a0 params:(id)a1 callback:(id /* block */)a2;
+ (void)sendRequestLogWith:(id)a0 error:(id)a1 jsonObj:(id)a2;
+ (void)sendRequestMonitorWith:(id)a0 error:(id)a1;
+ (id)jsonToSingleMannorMode:(id)a0;
+ (id)dictForJson:(id)a0;
+ (id)jsonToMannorModes:(id)a0;

@end
