@interface DTFBaseAuthFacade : NSObject

+ (void)initSDK;
+ (id)getMetaInfo;
+ (void)initIPv6;
+ (void)setCustomUI:(id)a0 type:(id)a1 completion:(id /* block */)a2;
+ (void)setCustomLanguage:(id)a0 type:(id)a1 completion:(id /* block */)a2;
+ (void)verifyWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
+ (void)processLanguageWithParam:(id)a0 seed:(id)a1;
+ (void)preloadWithExtParams:(id)a0 onCompletion:(id /* block */)a1;
+ (id)getVersion;
+ (void)preloadWithCompletion:(id /* block */)a0;

@end
