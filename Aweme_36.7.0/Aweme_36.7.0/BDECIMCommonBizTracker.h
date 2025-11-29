@interface BDECIMCommonBizTracker : NSObject

+ (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 conversationID:(id)a1 messageID:(id)a2 messageSource:(id)a3 extDict:(id)a4 belongeClient:(id)a5;
+ (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 pbMessage:(id)a1 messageSource:(id)a2 extDict:(id)a3 belongeClient:(id)a4;
+ (void)trackMessageDiagnosisEventWithEventNo:(unsigned long long)a0 trackModel:(id)a1 messageSource:(id)a2 extDict:(id)a3 belongeClient:(id)a4;

@end
