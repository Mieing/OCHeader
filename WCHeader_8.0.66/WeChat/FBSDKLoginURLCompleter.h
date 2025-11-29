@class FBSDKLoginCompletionParameters;
@protocol NSObject;

@interface FBSDKLoginURLCompleter : NSObject <FBSDKLoginCompleting> {
    FBSDKLoginCompletionParameters *_parameters;
    id<NSObject> _observer;
    BOOL _performExplicitFallback;
}

- (id)initWithURLParameters:(id)a0 appID:(id)a1;
- (void)completeLogIn:(id)a0 withHandler:(id /* block */)a1;
- (void)setParametersWithDictionary:(id)a0 appID:(id)a1;
- (void)setErrorWithDictionary:(id)a0;
- (void)attemptBrowserLogIn:(id)a0;
- (void).cxx_destruct;

@end
