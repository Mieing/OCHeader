@class NSString, DownloadVoiceCDNMgr, CDownloadVoiceMgr, NSMutableSet;

@interface VoiceMsgDownloader : MMUserService <INewSyncExt, DownloadVoiceDelegate, MMServiceProtocol>

@property (retain, nonatomic) CDownloadVoiceMgr *cgiDownloader;
@property (retain, nonatomic) DownloadVoiceCDNMgr *cdnDownloader;
@property (retain, nonatomic) NSMutableSet *downloadCdnFailSvrId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)dealloc;
- (void)downloadMsg:(id)a0;
- (BOOL)getMessageFromDB:(id)a0;
- (BOOL)updateMessageToDB:(id)a0;
- (void)OnRecvData:(id)a0 MesLocalID:(unsigned int)a1 n64MesSvrID:(long long)a2 CreateTime:(unsigned int)a3 VoiceTime:(unsigned int)a4 Offset:(unsigned int)a5 Len:(unsigned int)a6 Data:(id)a7 EndFlag:(unsigned int)a8 ErrNo:(unsigned int)a9;
- (void)onCDNDownloadFail:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 CreateTime:(unsigned int)a3 Xml:(id)a4;
- (void)onNewSyncAddMessage:(id)a0;
- (void).cxx_destruct;

@end
