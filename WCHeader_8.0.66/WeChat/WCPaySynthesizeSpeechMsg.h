@class WCPayExtensionInfo, NSString, NSDictionary, NSData, CMessageWrap;

@interface WCPaySynthesizeSpeechMsg : MMObject

@property (readonly, nonatomic) WCPayExtensionInfo *m_extensionInfo;
@property (readonly, nonatomic) NSDictionary *m_payload;
@property (readonly, nonatomic) unsigned long long m_speechFormat;
@property (readonly, nonatomic) NSData *m_synthesizeSpeechData;
@property (readonly, nonatomic) unsigned long long m_messageType;
@property (nonatomic) BOOL m_isOverTime;
@property (nonatomic) unsigned int voiceSynthesizeTime;
@property (retain, nonatomic) NSString *m_pushIdentifier;
@property (retain, nonatomic) CMessageWrap *m_messageWrap;

+ (id)speechMsgWithPayload:(id)a0;
+ (id)speechMsgWithWCPayExtensionInfo:(id)a0;
+ (id)speechMsgWithNewXML:(id)a0;
+ (id)speechMsgWithMsgType:(id)a0 extensionInfo:(id)a1 payload:(id)a2 messageType:(unsigned long long)a3;

- (id)init;
- (id)initWithExtensionInfo:(id)a0 payload:(id)a1 messageType:(unsigned long long)a2;
- (void)setPayloadWithLocalPush:(id)a0;
- (void)setPayload;
- (id)getLocalNotificationInfo:(BOOL)a0;
- (id)getVoiceRequest;
- (BOOL)setVoiceResponse:(id)a0;
- (unsigned int)getCgiCmd;
- (BOOL)isSwitchOpen;
- (id)frontPartSoundPath;
- (id)soundNameOfSwitchOpen;
- (id)soundNameOfSwitchClose;
- (void)reportIdKeyGetVoiceReq;
- (void)reportIdKeyPlaySoundSuccess;
- (void)reportIdKeyPlaySoundFailed;
- (void)reportIdKeyGetVoiceReqSuccess;
- (void)reportIdKeyGetVoiceReqLocalNetWorkError;
- (void)reportIdKeyGetVoiceReqCgiError;
- (void)reportKVPushSuccess;
- (void)reportKVPlaySoundFail:(unsigned int)a0;
- (void)reportKVForegroundPlaySoundSuccess;
- (void)reportCgiCostTime:(unsigned int)a0;
- (void)reportKVScene:(unsigned int)a0;
- (void)reportKVPlayPrefixSound;
- (void)reportKVPlaySoundFail:(unsigned int)a0 retCode:(long long)a1;
- (void)reportSDKComposeSuccess:(id)a0;
- (void)reportSDKComposeFail:(unsigned int)a0 packId:(id)a1;
- (void).cxx_destruct;

@end
