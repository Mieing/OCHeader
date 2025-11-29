@class NSString;

@interface AWECarrierServiceIMP : HTSService <AWECarrierService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)availabeCarrierService;
- (void)requestSecurityPhoneNumber:(long long)a0 enterMethod:(id)a1 completion:(id /* block */)a2;
- (void)requestTokenWithCarrier:(long long)a0 completion:(id /* block */)a1;
- (void)requestTokenDictWithCarrier:(long long)a0 completion:(id /* block */)a1;
- (BOOL)telecomFromV2;
- (id)appIdForCarrier:(long long)a0;
- (void)startup;

@end
