@interface IESLiveCertifyUnderAgeService : IESLiveCertifyBaseService

- (void)handleCertifyWithParamsModel:(id)a0 withCompleteBlock:(id /* block */)a1;
- (BOOL)needCertifyProcess:(id)a0;
- (id)p_fetchUnderAgeErrorPrompts:(id)a0;
- (BOOL)p_checkBusineseeCanUserPrompte:(id)a0;

@end
