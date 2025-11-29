@interface VoicePrintCommunication : NSObject

+ (void)checkVoicePrintWithCompletion:(id /* block */)a0;
+ (void)switchVoicePrint:(BOOL)a0 completion:(id /* block */)a1;
+ (void)deleteVoicePrintWithCompletion:(id /* block */)a0;
+ (void)operate:(unsigned int)a0 completion:(id /* block */)a1;
+ (void)getTicketForUsername:(id)a0 completion:(id /* block */)a1;
+ (void)getTicketForUsername:(id)a0 idcRedirectCount:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)getResourceWithScene:(unsigned int)a0 ticket:(id)a1 useRSA:(BOOL)a2 completion:(id /* block */)a3;

@end
