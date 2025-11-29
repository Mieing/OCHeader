@class TranslateLinkParameter;

@interface TranslateLinkCgiHandler : MMObject <PBMessageObserverDelegate>

@property (retain, nonatomic) TranslateLinkParameter *parameter;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ asyncCompletion;
@property (retain, nonatomic) TranslateLinkCgiHandler *selfRetain;

+ (void)requestWithParamter:(id)a0 completion:(id /* block */)a1;
+ (void)requestWithParamter:(id)a0 completion:(id /* block */)a1 asyncCompletion:(id /* block */)a2;
+ (void)reportRequestTranslateLinkAsync:(BOOL)a0;
+ (void)removeCachedResultWithParam:(id)a0;
+ (id)genCacheKeyWithParam:(id)a0;
+ (void)cacheResult:(id)a0 withParam:(id)a1;
+ (id)getCachedResultWithParam:(id)a0;

- (id)initWithParameter:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)asyncReleaseSelf;
- (void)callbackCompleteFail:(id)a0 error:(id)a1;
- (void)callbackCompleteSuccessWithResult:(id)a0;
- (void)sendRequest;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onTranslateLinkResp:(id)a0;
- (void)reportTranslateLinkFailWithResult:(id)a0;
- (void)reportTranslateLinkSuccWithResult:(id)a0;
- (void)reportSendRequest:(id)a0;
- (void)reportReceiveResponse:(id)a0 resp:(id)a1;
- (void).cxx_destruct;

@end
