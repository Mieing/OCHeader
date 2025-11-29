@interface AliyunFaceAuthFacade : NSObject

+ (void)initSDK;
+ (id)getMetaInfo;
+ (void)initIPv6;
+ (void)preload:(id)a0 completion:(id /* block */)a1;
+ (id)getNFCVersion;
+ (void)setupNetwork:(id)a0 timeoutForVerify:(id)a1;
+ (id)getNFCMetaInfo;
+ (void)setCustomUI:(id)a0 type:(id)a1 completion:(id /* block */)a2;
+ (void)setCustomLanguage:(id)a0 type:(id)a1 completion:(id /* block */)a2;
+ (void)verifyWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
+ (void)nfcVerifyWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
+ (void)processParams:(id)a0;
+ (void)setDataProtocolVersion;
+ (void)init;
+ (id)getVersion;

@end
