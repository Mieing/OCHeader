@interface BDPrivacyCertEntry : NSObject

+ (void)validatePrivacyCert:(id)a0 context:(id)a1 withErrorHandler:(id /* block */)a2 wrappedAPI:(id /* block */)a3;
+ (id)validateAndTranslatePrivacyCert:(id)a0 context:(id)a1 withErrorHandler:(id /* block */)a2 wrappedAPI:(id /* block */)a3;
+ (id)privacyCertValidateImp;
+ (id)validatePrivacyCert:(id)a0 context:(id)a1;
+ (void)clearCertInThreadContext;
+ (id)validateAndTranslatePrivacyCert:(id)a0 context:(id)a1;

@end
