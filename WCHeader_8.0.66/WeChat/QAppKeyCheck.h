@class NSString;

@interface QAppKeyCheck : NSObject

@property (copy, nonatomic) NSString *miniProgramID;
@property (copy, nonatomic) NSString *businessKey;

- (void)startAppKeyCheck:(id /* block */)a0;
- (id)createAuthenticationErrorWithCode:(long long)a0 errorMsg:(id)a1;
- (void)onURLFinishLoading:(id)a0 callback:(id /* block */)a1;
- (void)authFailedRequest:(id)a0 authError:(id)a1;
- (id)appendParameterString;
- (id)initWithMiniProgramID:(id)a0 businessKey:(id)a1;
- (void).cxx_destruct;

@end
