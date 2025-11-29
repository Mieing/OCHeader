@interface IESAccountCert : NSObject

+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 completion:(id /* block */)a4;
+ (void)beginCertificationWithParameter:(id)a0 completion:(id /* block */)a1;
+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 completion:(id /* block */)a2;
+ (void)beginCertificationWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 completion:(id /* block */)a3;
+ (void)beginCertificationForResultWithParameter:(id)a0 faceVerificationOnly:(BOOL)a1 fromViewController:(id)a2 forcePresent:(BOOL)a3 completion:(id /* block */)a4;
+ (unsigned long long)realNameVerifyStatus;
+ (void)handlerWebEventForResultWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)jumpToRealNameResultPage:(id /* block */)a0;
+ (id)realNameResultPageUrlMap;
+ (void)requestVerifyStatus:(id /* block */)a0;
+ (void)setRealNameResultPageUrlMap:(id)a0;
+ (void)setRealNameVerifyStatus:(unsigned long long)a0;

@end
