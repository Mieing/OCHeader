@class NSString, EmoticonDownloadProxy, EmoticonDownloadMd5ListCgi;
@protocol EmoticonRecoverLogicObjectDelegate;

@interface EmoticonRecoverLogicObject : MMObject <EmoticonDownloadMd5ListCgiDelegate, EmoticonDownloadProxyDelegate>

@property (retain, nonatomic) EmoticonDownloadMd5ListCgi *m_recoverCgi;
@property (retain, nonatomic) EmoticonDownloadProxy *m_downloadCgi;
@property (nonatomic) unsigned long long m_type;
@property (nonatomic) int downloadedEmoticonCount;
@property (nonatomic) unsigned long long maxOnceDownloadEmoticonCount;
@property (retain, nonatomic) NSString *logPrefix;
@property (nonatomic) BOOL m_isActive;
@property (nonatomic) BOOL m_hasStartLogic;
@property (nonatomic) BOOL isEmoticonMd5CheckFinished;
@property (weak, nonatomic) id<EmoticonRecoverLogicObjectDelegate> m_delegate;
@property (nonatomic) unsigned int m_needNotifyCount;
@property (nonatomic) BOOL m_needUpdateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithType:(unsigned long long)a0 andDelegate:(id)a1;
- (void)initPartDownloadStatus;
- (BOOL)preCheckStartLogic;
- (void)startLogic;
- (void)startLogicWithIncrementMd5List:(id)a0;
- (void)startLogicWithCheckMd5Exist;
- (void)internalStartRecoverCgiWithMd5ListObj:(id)a0;
- (void)tryStartLogicForSyncAnotherPart;
- (void)syncAnotherPart;
- (void)stopLogic;
- (BOOL)isActive;
- (BOOL)isAllEmoticonRecoverd;
- (BOOL)canStartCgiNow;
- (void)downloadEmoticon;
- (void)callOkDelegate;
- (void)callFailedDelegate;
- (BOOL)clearLocalContentByMd5List:(id)a0;
- (void)startDownloadWithMd5List:(id)a0;
- (void)completeAndAddEmoticonWithMd5:(id)a0 imageData:(id)a1;
- (void)asyncAddEmoticonWithData:(id)a0 addEmoticonWrap:(id)a1;
- (void)continueDownloadFromDownloadFinished:(BOOL)a0;
- (void)onEmoticonDownloadMd5ListOk:(id)a0 reqBuff:(id)a1 versionKey:(id)a2;
- (void)onEmoticonDownloadMd5ListFailed;
- (void)onEmoticonDownloadMd5Ok:(id)a0 AndFilePath:(id)a1 withUserInfo:(id)a2;
- (void)onEmoticonDownloadMd5Failed:(id)a0 withUserInfo:(id)a1;
- (void).cxx_destruct;

@end
