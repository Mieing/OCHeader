@class NSString, GIDGoogleUser;

@interface GIDSignInResult : NSObject

@property (readonly, nonatomic) GIDGoogleUser *user;
@property (readonly, nonatomic) NSString *serverAuthCode;

- (id)initWithGoogleUser:(id)a0 serverAuthCode:(id)a1;
- (void).cxx_destruct;

@end
