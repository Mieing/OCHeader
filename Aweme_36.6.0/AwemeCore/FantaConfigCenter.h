@interface FantaConfigCenter : NSObject

+ (BOOL)enableFanta;
+ (BOOL)enableRequestInterceptor;
+ (BOOL)enablePreRequestInterceptor;
+ (id)requestPathBlackList;
+ (BOOL)enableDecodePostFormTypeForRequest:(id)a0;
+ (id)featureUploadConfigs;
+ (id)requestInterceptorMap;
+ (BOOL)enableFeatureSequenceStorageOpt;
+ (BOOL)enableFeatureSequenceStorageOptPatch;
+ (BOOL)enableFeatureSequenceFileStorage;
+ (BOOL)enableUploadKeyReplaceFeatureKey;
+ (id)settingsService;

@end
