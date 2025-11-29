@interface ACCAIGCRetryTaskAIMateEditHandler : ACCAIGCRetryTaskBaseHandler

+ (unsigned long long)retryType;
+ (void)checkAndBuildRetryPublishViewModelAndStartWithInfo:(id)a0 scene:(unsigned long long)a1;
+ (void)checkRetryInfoAndStartRetryProcess:(id)a0 publishViewModel:(id)a1;

@end
