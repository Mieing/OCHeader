@interface BaseUploadVoiceMgr : MMObject

- (void)InitUploadMgr:(id)a0 Lock:(id)a1 Delegate:(id)a2;
- (void)Start;
- (void)Stop;
- (id)loadPB;
- (void)AddNewPart:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 Offset:(unsigned int)a3 Len:(unsigned int)a4 VoiceTime:(unsigned int)a5 CreateTime:(unsigned int)a6 EndFlag:(unsigned int)a7 CancelFlag:(unsigned int)a8 VoiceFormat:(unsigned int)a9 ForwardFlag:(unsigned int)a10 msgSource:(id)a11;
- (void)ResendVoiceMsg:(id)a0 MsgWrap:(id)a1;
- (id)getExtCommInfoXml:(id)a0 LocalID:(unsigned int)a1;

@end
