@interface GIDEMMSupport : NSObject <GTMAuthSessionDelegate>

+ (id)parametersWithParameters:(id)a0 emmSupport:(id)a1 isPasscodeInfoRequired:(BOOL)a2;
+ (id)updatedEMMParametersWithParameters:(id)a0;
+ (void)handleTokenFetchEMMError:(id)a0 completion:(id /* block */)a1;

- (id)additionalTokenRefreshParametersForAuthSession:(id)a0;
- (void)updateErrorForAuthSession:(id)a0 originalError:(id)a1 completion:(id /* block */)a2;
- (id)init;

@end
