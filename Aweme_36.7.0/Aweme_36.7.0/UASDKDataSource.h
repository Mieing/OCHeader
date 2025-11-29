@interface UASDKDataSource : NSObject

+ (id)ipInfo;
+ (id)ipListInfoWithInterfaceName:(id)a0;
+ (BOOL)isCellOpenedWithPrivateInfo:(id)a0;
+ (void)generateDataCompletion:(id /* block */)a0;
+ (id)networkDiagnoseInfo;
+ (id)deviceInfo;
+ (id)uniqueId;
+ (id)requestData;

@end
