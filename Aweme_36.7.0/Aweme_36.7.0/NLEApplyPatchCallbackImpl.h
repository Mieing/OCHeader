@class NSString;

@interface NLEApplyPatchCallbackImpl : NSObject <NLEApplyPatchCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implWithProgressOpt:(id /* block */)a0 succeedOpt:(id /* block */)a1 errorOpt:(id /* block */)a2;

- (void)onError:(id)a0 error:(id)a1;
- (void)onProgress:(id)a0 progress:(float)a1;
- (void)onSuccess:(id)a0;

@end
