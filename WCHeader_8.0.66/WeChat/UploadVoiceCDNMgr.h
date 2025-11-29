@class MemoryMappedKV, NSMutableDictionary, NSRecursiveLock, MMTimer, UploadVoiceWrap;
@protocol UploadVoiceDelegate;

@interface UploadVoiceCDNMgr : BaseUploadVoiceMgr <IMsgExt>

@property (retain, nonatomic) MemoryMappedKV *tmpUploadItems;
@property (retain, nonatomic) NSMutableDictionary *readyUploadItems;
@property (nonatomic) BOOL bSending;
@property (retain, nonatomic) UploadVoiceWrap *currentUploadItem;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) MMTimer *timerCheck;
@property (weak, nonatomic) id<UploadVoiceDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)InitUploadMgr:(id)a0 Lock:(id)a1 Delegate:(id)a2;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUpload;
- (void)AddNewPart:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 Offset:(unsigned int)a3 Len:(unsigned int)a4 VoiceTime:(unsigned int)a5 CreateTime:(unsigned int)a6 EndFlag:(unsigned int)a7 CancelFlag:(unsigned int)a8 VoiceFormat:(unsigned int)a9 ForwardFlag:(unsigned int)a10 msgSource:(id)a11;
- (void)ResendVoiceMsg:(id)a0 MsgWrap:(id)a1;
- (id)getPBPath;
- (id)loadPB;
- (void)loadItemFromPB;
- (void)updateItemToPB;
- (void)initTmpUploadItems;
- (void)startSend;
- (void)startSend:(id)a0;
- (void)uploadVoiceToCDN:(id)a0;
- (void)handleUploadCDNFail:(id)a0 retryCgi:(BOOL)a1;
- (void)handleUploadCDNSuccess:(id)a0;
- (void)handleSendVoiceFail:(id)a0;
- (void)handleSendVoiceSuccess:(id)a0;
- (void)deleteUploadItem:(id)a0;
- (void)reportUploadCDNFail:(id)a0;
- (void)reportUploadCDNSuccess:(id)a0;
- (void)OnWillRevokeMsg:(id)a0 revokeContext:(id)a1;
- (void).cxx_destruct;

@end
