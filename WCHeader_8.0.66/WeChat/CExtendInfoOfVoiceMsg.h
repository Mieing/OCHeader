@class NSData, NSString, CMessageWrap;

@interface CExtendInfoOfVoiceMsg : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>

@property (nonatomic) unsigned int m_uiVoiceTime;
@property (nonatomic) unsigned int m_uiVoiceFormat;
@property (nonatomic) unsigned int m_uiVoiceEndFlag;
@property (nonatomic) unsigned int m_uiVoiceCancelFlag;
@property (nonatomic) unsigned int m_uiVoiceForwardFlag;
@property (retain, nonatomic) NSData *m_dtVoice;
@property (retain, nonatomic) NSString *voiceUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (weak, nonatomic) CMessageWrap *m_refMessageWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)CreateExtendInfoWithType:(unsigned int)a0 retExtendInfo:(id *)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)a0;
- (BOOL)SaveMesVoice:(id)a0;
- (BOOL)IsUnPlayed;
- (BOOL)IsDownloadEnded;
- (void)SetPlayed;
- (BOOL)IsRecording;
- (BOOL)IsPlaySounded;
- (void)SetPlaySounded:(BOOL)a0;
- (void).cxx_destruct;

@end
