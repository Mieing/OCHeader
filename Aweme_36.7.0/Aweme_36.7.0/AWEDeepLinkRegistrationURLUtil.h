@interface AWEDeepLinkRegistrationURLUtil : NSObject

+ (id)getSecLinkQueryParamsForURL:(id)a0 referString:(id)a1;
+ (id)getSafeWebUrlFrom:(id)a0 referString:(id)a1;
+ (id)getSecLinkQueryParamsForLiveFromURL:(id)a0 referString:(id)a1;
+ (id)localizeSchemeForURL:(id)a0;
+ (BOOL)checkAppScheme:(id)a0;
+ (BOOL)checkHTTP:(id)a0;
+ (BOOL)checkWithSchemaConfig:(id)a0 sourceType:(unsigned long long)a1;
+ (Class)aAWEDeepLinkRegistrationURLUtilCommonAdapterClass;
+ (id)getSafeWebUrlFrom:(id)a0 sceneName:(id)a1;
+ (BOOL)validateAppSchema:(id)a0;
+ (BOOL)validateAppSchema:(id)a0 sourceType:(unsigned long long)a1;

- (id)aAWEDeepLinkRegistrationURLUtilCommonAdapter;

@end
