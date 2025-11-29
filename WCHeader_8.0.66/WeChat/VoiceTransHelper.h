@class NSString, WebviewLocalResItem, CMessageWrap, MMTimer;
@protocol VoiceTransDelegate;

@interface VoiceTransHelper : MMObject <IVoiceTransExt, PBMessageObserverDelegate> {
    unsigned int m_uNotifyId;
    unsigned int m_iCurVoiceResultSeq;
    WebviewLocalResItem *m_webViewItem;
    unsigned int m_uiScene;
    NSString *m_nsVoicePath;
    NSString *m_nsVoiceTransPath;
    unsigned int m_uNetGetInterval;
    BOOL m_bNeedGetResult;
    BOOL m_bIsGetting;
    unsigned int m_uTotalLen;
    unsigned int m_uStartPos;
    unsigned int m_uDataLen;
    unsigned int m_uUploadFailTimes;
    unsigned int m_uSampleRateForSilk;
    MMTimer *m_getTimer;
    long long m_webViewItemFormat;
}

@property (weak, nonatomic) id<VoiceTransDelegate> m_delegate;
@property (retain, nonatomic) CMessageWrap *m_msgWrap;
@property (retain, nonatomic) NSString *m_nsVoiceID;
@property (nonatomic) int translateScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithVoiceMsg:(id)a0 VoiceID:(id)a1;
- (id)initWithWebviewLocalResItem:(id)a0 VoiceID:(id)a1;
- (void)startWebviewVoiceTrans;
- (void)startWebviewVoiceTransWithFormat:(long long)a0;
- (void)startVoiceTrans;
- (void)stopTimer;
- (void)stopVoiceTrans;
- (void)doCheckVoice;
- (void)HandleCheckVoiceResp:(id)a0 Event:(unsigned int)a1;
- (void)UploadVoice;
- (void)HandleUploadVoiceResp:(id)a0 Event:(unsigned int)a1;
- (void)startGetTimer;
- (void)TimeToGetVoieceTrans;
- (void)GetVoiceTrans;
- (void)HandleGetVoiceTransResp:(id)a0 Event:(unsigned int)a1;
- (void)reportVoiceID:(id)a0 result:(int)a1;
- (void)saveVoiceTrans:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnVoiceTransNotify:(unsigned int)a0 Sequence:(unsigned int)a1;
- (void).cxx_destruct;

@end
