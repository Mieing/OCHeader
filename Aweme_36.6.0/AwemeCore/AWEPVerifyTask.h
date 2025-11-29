@class NSString;

@interface AWEPVerifyTask : HTSService <AWEPassportVerifyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)verifyAccountPassword:(id)a0 verifyTicket:(id)a1;
+ (id)verifyBindThird:(id)a0 verifyTicket:(id)a1 platform:(unsigned long long)a2;
+ (id)verifyUpstreamSMSWithVerifyTicket:(id)a0;
+ (id)startUpstreamSMSQueryVerifyWithTicket:(id)a0;

- (void)verifyAccountPassword:(id)a0 verifyTicket:(id)a1 completion:(id /* block */)a2;
- (void)verifyBindThird:(id)a0 verifyTicket:(id)a1 platform:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)verifyUpstreamSMSWithVerifyTicket:(id)a0 completion:(id /* block */)a1;

@end
