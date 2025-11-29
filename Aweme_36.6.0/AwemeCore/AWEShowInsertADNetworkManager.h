@interface AWEShowInsertADNetworkManager : NSObject

+ (void)requestInsertADForAwemeModel:(id)a0 scene:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
+ (void)requestFrisbeeWithAwemeModel:(id)a0 commonParameters:(id)a1 clientParameters:(id)a2 completion:(id /* block */)a3;
+ (void)requestSendAdLogWithRequestParameter:(id)a0 completion:(id /* block */)a1;
+ (void)requestPlayletADDyeWithParameters:(id)a0 completion:(id /* block */)a1;
+ (id)createUniqueKey;
+ (void)getURLWithURLPath:(id)a0 block:(id /* block */)a1;
+ (id)playletShowTrackForModel:(id)a0 enterFrom:(id)a1 previousPage:(id)a2 customParameters:(id)a3;

@end
