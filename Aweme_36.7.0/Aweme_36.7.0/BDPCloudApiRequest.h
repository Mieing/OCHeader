@interface BDPCloudApiRequest : NSObject

+ (BOOL)_checkResponseDataVaild:(id)a0 error:(id *)a1;
+ (void)requestSidWithCloudCode:(id)a0 cloudACode:(id)a1 appId:(id)a2 completion:(id /* block */)a3;
+ (void)requestRefreshSid:(id)a0 appId:(id)a1 completion:(id /* block */)a2;

@end
