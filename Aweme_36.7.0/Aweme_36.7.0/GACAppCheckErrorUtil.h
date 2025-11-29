@interface GACAppCheckErrorUtil : NSObject

+ (id)errorWithFailureReason:(id)a0;
+ (id)JSONSerializationError:(id)a0;
+ (id)appCheckTokenResponseErrorWithMissingField:(id)a0;
+ (id)keychainErrorWithError:(id)a0;
+ (id)appAttestAttestationResponseErrorWithMissingField:(id)a0;
+ (id)appAttestKeyIDNotFound;
+ (id)appAttestAttestKeyFailedWithError:(id)a0 keyId:(id)a1 clientDataHash:(id)a2;
+ (id)appAttestGenerateAssertionFailedWithError:(id)a0 keyId:(id)a1 clientDataHash:(id)a2;
+ (id)unsupportedAttestationProvider:(id)a0;
+ (id)appAttestGenerateKeyFailedWithError:(id)a0;
+ (id)cachedTokenNotFound;
+ (id)cachedTokenExpired;
+ (id)APIErrorWithNetworkError:(id)a0;
+ (id)APIErrorWithHTTPResponse:(id)a0 data:(id)a1;
+ (id)unknownErrorWithError:(id)a0;
+ (id)appCheckErrorWithCode:(long long)a0 failureReason:(id)a1 underlyingError:(id)a2;
+ (id)publicDomainErrorWithError:(id)a0;

@end
