@interface BDPPluginSecurity : BDPBridgeInstancePlugin

- (void)checkSensitiveWordWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)reportLocalExperimentalDataWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getRandomValuesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)controlStrategyDataChangeWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getLatestUserCryptoKeyWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;

@end
