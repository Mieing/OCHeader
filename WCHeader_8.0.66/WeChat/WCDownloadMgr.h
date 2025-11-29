@class OrderedDictionary, NSMutableSet;
@protocol WCDownloadMgrDelegate;

@interface WCDownloadMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt> {
    long long m_currScene;
    NSMutableSet *m_cancelDownloadMedias;
    NSMutableSet *m_needNotifyMedias;
    OrderedDictionary *m_dataDownloadQueue;
    int m_dataCurrentDownloadingCount;
    int m_dataMaxDownloadCount;
    OrderedDictionary *m_previewDownloadQueue;
    int m_previewCurrentDownloadingCount;
    int m_previewMaxDownloadCount;
    OrderedDictionary *m_sightDownloadQueue;
    int m_sightCurrentDownloadingCount;
    int m_sightMaxDownloadCount;
    OrderedDictionary *m_videoDownloadQueue;
    int m_videoCurrentDownloadingCount;
    int m_videoMaxDownloadCount;
}

@property (weak, nonatomic) id<WCDownloadMgrDelegate> m_delegate;

- (id)init;
- (void)dealloc;
- (id)getDownloadQueue:(long long)a0;
- (int *)getCurrentDownloadingCountWithType:(long long)a0;
- (void)addDownloadTask:(id)a0 downloadType:(long long)a1 withNotify:(BOOL)a2;
- (void)downloadMedia:(id)a0 downloadType:(long long)a1;
- (void)downloadMediaWithProcessNotify:(id)a0 downloadType:(long long)a1;
- (void)forceDownloadMedia:(id)a0 downloadType:(long long)a1;
- (void)forceDownloadMediaWithProcessNotify:(id)a0 downloadType:(long long)a1;
- (void)cancelDownloadMedia:(id)a0 downloadType:(long long)a1;
- (void)setDataMaxDownloadCountWifi:(int)a0 Edge:(int)a1;
- (void)setPreviewMaxDownloadCountWifi:(int)a0 Edge:(int)a1;
- (void)pullDownloadMediaToFront:(id)a0 downloadType:(long long)a1;
- (void)setDownloadScene:(long long)a0;
- (void)tryStartNextDownloadTask:(long long)a0;
- (void)doDownloadMediaCDN:(id)a0;
- (void)reportDownloadRecord:(id)a0 downloadMediaWrap:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)ReveicePartFromURL:(id)a0;
- (void)onReveicePartFromURL:(id)a0;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)useDefaultImageDownloadConcurrentCount;
- (void)updateImageDownloadConcurrentCount;
- (void)updateDownloadConcurrentCount;
- (id)getEncUrlWithDownloadId:(id)a0 FromMediaItem:(id)a1;
- (id)urlSuffixWithToken:(id)a0 encIdx:(unsigned int)a1;
- (BOOL)isDownloadingSnsImageForUrl:(id)a0;
- (void).cxx_destruct;

@end
