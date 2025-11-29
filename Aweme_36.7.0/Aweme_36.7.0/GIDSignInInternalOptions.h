@class GIDConfiguration, NSArray, NSDictionary, NSString, UIViewController;

@interface GIDSignInInternalOptions : NSObject

@property (readonly, nonatomic) BOOL interactive;
@property (readonly, nonatomic) BOOL continuation;
@property (readonly, nonatomic) BOOL addScopesFlow;
@property (readonly, nonatomic) NSDictionary *extraParams;
@property (readonly, nonatomic) GIDConfiguration *configuration;
@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *loginHint;

+ (id)silentOptionsWithCompletion:(id /* block */)a0;
+ (id)defaultOptionsWithConfiguration:(id)a0 presentingViewController:(id)a1 loginHint:(id)a2 addScopesFlow:(BOOL)a3 completion:(id /* block */)a4;
+ (id)defaultOptionsWithConfiguration:(id)a0 presentingViewController:(id)a1 loginHint:(id)a2 addScopesFlow:(BOOL)a3 scopes:(id)a4 completion:(id /* block */)a5;

- (id)optionsWithExtraParameters:(id)a0 forContinuation:(BOOL)a1;
- (void).cxx_destruct;

@end
