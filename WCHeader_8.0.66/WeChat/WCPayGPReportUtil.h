@interface WCPayGPReportUtil : NSObject

+ (void)logGroupPayClickReport:(unsigned int)a0 subType:(unsigned int)a1;
+ (void)logGroupPayClickReport:(unsigned int)a0 subType:(unsigned int)a1 mode:(unsigned int)a2;
+ (void)logGroupPayEventReport:(unsigned int)a0;
+ (void)logGroupPayDataReport:(unsigned int)a0 chatroomMemberCount:(unsigned int)a1 participateCount:(unsigned int)a2 amount:(unsigned long long)a3 theme:(id)a4 detailData:(id)a5;
+ (void)logGroupPayIDKey:(unsigned int)a0;

@end
