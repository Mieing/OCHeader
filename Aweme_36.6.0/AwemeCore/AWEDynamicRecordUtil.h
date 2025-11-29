@interface AWEDynamicRecordUtil : NSObject

+ (BOOL)higherThanMinAppVersion:(id)a0;
+ (id)removeParam:(id)a0 inUrl:(id)a1;
+ (id)addParam:(id)a0 inUrl:(id)a1;
+ (void)requestDynamicActivityDataWithActivityId:(id)a0 schemaModeId:(id)a1 schema:(id)a2 trackInfo:(id)a3 showToast:(BOOL)a4 completion:(id /* block */)a5;

@end
