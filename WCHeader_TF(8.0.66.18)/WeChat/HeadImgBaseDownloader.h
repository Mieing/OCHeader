@class NSMutableArray, NSMutableDictionary;
@protocol HeadImgDownloaderDelegate;

@interface HeadImgBaseDownloader : MMObject <PBMessageObserverDelegate> {
    NSMutableArray *m_aryRequest;
    NSMutableDictionary *m_mapLastGetTime;
    BOOL m_bCommiting;
    NSMutableArray *m_aryGetting;
    unsigned int m_uiDownloadCount;
    BOOL m_bGetting;
}

@property (weak, nonatomic) id<HeadImgDownloaderDelegate> downloaderDelegate;

- (id)init;
- (void)dealloc;
- (BOOL)addRequest:(id)a0 url:(id)a1 forCategory:(unsigned char)a2;
- (void)sendRequest;
- (void)createNetworkRequest:(id)a0;
- (BOOL)cancelRequest:(id)a0;
- (void)addToLastMap:(id)a0;
- (void)removeUsrFromLastFailureList:(id)a0;
- (void)commitRequestQueue;
- (BOOL)checkIfForbidden:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
