@interface AWEDeepLinkWorkflow : NSObject

+ (BOOL)canHandleDeepLink:(id)a0 sourceType:(unsigned long long)a1;
+ (BOOL)checkHTTP:(id)a0;
+ (BOOL)checkWithSchemaConfig:(id)a0 sourceType:(unsigned long long)a1;
+ (id)referStringForType:(unsigned long long)a0;
+ (Class)aAWEDeepLinkWorkflowRegistrationCommonAdapterClass;
+ (void)registerPathsIfNeeded;
+ (BOOL)openDeepLink:(id)a0 linkSession:(id)a1 sourceType:(unsigned long long)a2 prepareBlock:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)logHandleDeepLink:(id)a0 sourceType:(unsigned long long)a1;
+ (void)logCannotHandleDeepLink:(id)a0;
+ (id)workflowFromURLString:(id)a0 sourceType:(unsigned long long)a1 linkSession:(id)a2;
+ (BOOL)enableRouteSafety;
+ (Class)aAWEDLTransferStepsLGAdapterClass;
+ (Class)aAWEDeepLinkWorkflowDOUYINLiteAdapterClass;
+ (void)startWorkflowForDomain:(id)a0;
+ (BOOL)checkIsRealIronMan:(id)a0;
+ (BOOL)checkSourceType:(unsigned long long)a0 deeplink:(id)a1;
+ (BOOL)openDeepLink:(id)a0 linkSession:(id)a1 sourceType:(unsigned long long)a2 prepareBlock:(id /* block */)a3;
+ (void)trackOpenUrlWithScheme:(id)a0;
+ (id)preprocessSchemaFromDeepLink:(id)a0;
+ (void)start;

- (id)aAWEDeepLinkWorkflowRegistrationCommonAdapter;
- (id)aAWEDeepLinkWorkflowDOUYINLiteAdapter;
- (id)aAWEDLTransferStepsLGAdapter;

@end
