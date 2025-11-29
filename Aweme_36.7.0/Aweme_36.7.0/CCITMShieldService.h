@interface CCITMShieldService : NSObject

+ (id)CCIT_Initialize:(id)a0 userId:(id)a1 pin:(id)a2;
+ (id)CCIT_GenPartPubkey:(id)a0 data:(id)a1 q1Id:(id)a2;
+ (id)CCIT_GenCSR:(id)a0 data:(id)a1;
+ (id)CCIT_ImportCert:(id)a0 cert:(id)a1;
+ (id)CCIT_PartSign:(id)a0 inData:(id)a1;
+ (id)CCIT_ImportQ1:(id)a0 data:(id)a1 q1Id:(id)a2;
+ (id)CCIT_CheckCertState;
+ (id)CCIT_ImportServerCert:(id)a0;
+ (id)CCIT_Encrypt:(id)a0 cert:(id)a1;
+ (id)CCIT_AnalysisCert:(id)a0;
+ (id)CCIT_DeleteCert:(id)a0;
+ (id)CCIT_JointPartSign:(id)a0 userId:(id)a1 pin:(id)a2 data:(id)a3 q1Id:(id)a4 inData:(id)a5;

@end
