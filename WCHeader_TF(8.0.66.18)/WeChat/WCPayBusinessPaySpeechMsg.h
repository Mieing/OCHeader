@interface WCPayBusinessPaySpeechMsg : WCPaySynthesizeSpeechMsg

- (id)getVoiceRequest;
- (BOOL)setVoiceResponse:(id)a0;
- (unsigned int)getCgiCmd;
- (BOOL)isSwitchOpen;
- (id)frontPartSoundPath;
- (id)soundNameOfSwitchOpen;
- (id)soundNameOfSwitchClose;
- (unsigned int)getReportSessionType;
- (void)reportIdKeyGetVoiceReq;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportKVPushSuccess;
- (void)reportKVPlaySoundFail:(unsigned int)a0;
- (void)reportKVPlaySoundFail:(unsigned int)a0 retCode:(long long)a1;
- (void)reportCgiCostTime:(unsigned int)a0;
- (void)reportKVPlayPrefixSound;
- (void)reportSDKComposeSuccess:(id)a0;
- (void)reportSDKComposeFail:(unsigned int)a0 packId:(id)a1;

@end
