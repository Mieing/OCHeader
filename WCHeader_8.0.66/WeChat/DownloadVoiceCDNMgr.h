@class MMTimer, NSMutableDictionary, NSRecursiveLock;
@protocol DownloadVoiceDelegate;

@interface DownloadVoiceCDNMgr : NSObject

@property (retain, nonatomic) MMTimer *timerCheck;
@property (retain, nonatomic) MMTimer *timerCheckTimeout;
@property (retain, nonatomic) NSMutableDictionary *readyDownloadItems;
@property (nonatomic) BOOL bDownloading;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (weak, nonatomic) id<DownloadVoiceDelegate> delegate;

- (id)init;
- (void)Start;
- (void)Stop;
- (void)TimerCheckUpload;
- (void)TimerCheckTimeout;
- (id)getPBPath;
- (void)loadItemFromPB;
- (void)updateItemToPB;
- (void)OnSyncDownload:(id)a0 LocalID:(unsigned int)a1 n64SvrID:(long long)a2 CreateTime:(unsigned int)a3 Xml:(id)a4 Voice:(id)a5;
- (void)startDownload;
- (void)startDownload:(id)a0;
- (void)downloadVoiceFromCDN:(id)a0;
- (void)handleDownloadCDNFail:(id)a0;
- (void)handleDownloadCDNSuccess:(id)a0;
- (void)reportDownloadCDNFail:(id)a0;
- (void)reportDownloadCDNSuccess:(id)a0;
- (void).cxx_destruct;

@end
