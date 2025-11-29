@class NSString, GIDProfileData, OIDAuthState, NSError;

@interface GIDAuthFlow : GIDCallbackQueue

@property (retain, nonatomic) OIDAuthState *authState;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *emmSupport;
@property (retain, nonatomic) GIDProfileData *profileData;

- (void).cxx_destruct;

@end
