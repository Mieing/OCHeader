@class NSString;

@interface AWEPadCastLoginManager : NSObject

@property (copy, nonatomic) NSString *state;

+ (id)sharedInstance;

- (void)trackLoginFailureWithParams:(id)a0 error:(id)a1;
- (void)getTokenWithState:(id)a0 completion:(id /* block */)a1;
- (void)loginWithToken:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)getState;

@end
