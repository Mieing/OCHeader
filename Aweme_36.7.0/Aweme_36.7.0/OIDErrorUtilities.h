@interface OIDErrorUtilities : NSObject

+ (id)OAuthErrorWithDomain:(id)a0 OAuthResponse:(id)a1 underlyingError:(id)a2;
+ (id)HTTPErrorWithHTTPResponse:(id)a0 data:(id)a1;
+ (BOOL)isOAuthErrorDomain:(id)a0;
+ (long long)OAuthErrorCodeFromString:(id)a0;
+ (void)raiseException:(id)a0 message:(id)a1;
+ (id)resourceServerAuthorizationErrorWithCode:(long long)a0 errorResponse:(id)a1 underlyingError:(id)a2;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 description:(id)a2;
+ (void)raiseException:(id)a0;

@end
