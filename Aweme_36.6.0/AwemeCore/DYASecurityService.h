@interface DYASecurityService : NSObject

+ (void)startIDVerify:(id)a0 ticket:(id)a1 completion:(id /* block */)a2;
+ (void)genVerifyTicket:(id /* block */)a0;
+ (void)upsmsVerifyWithTicket:(id)a0 completion:(id /* block */)a1;
+ (void)verifyAuthTicketWithParams:(id)a0 completion:(id /* block */)a1;

@end
