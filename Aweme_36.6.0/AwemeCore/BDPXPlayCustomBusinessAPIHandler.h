@interface BDPXPlayCustomBusinessAPIHandler : BDPBridgeInstancePlugin

- (void)getPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1;
- (id)processPhoneNumber:(id)a0;
- (void)updatePhoneNumberAuthState:(BOOL)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)getPhoneNumberAuthStateWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)grantPhoneNumberWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)responseApiToCloudGameWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showCloudGameWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
