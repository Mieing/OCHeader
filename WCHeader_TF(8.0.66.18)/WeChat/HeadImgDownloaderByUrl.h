@class NSMutableArray, NSMutableDictionary;

@interface HeadImgDownloaderByUrl : HeadImgBaseDownloader <IContactMgrExt> {
    NSMutableArray *m_userRequestList;
    NSMutableDictionary *m_dicUserRequestCount;
}

- (id)init;
- (void)addDownloadRequestWithUrl:(id)a0 url:(id)a1 forCategory:(unsigned char)a2;
- (void)setDownloadFastMode;
- (void)setDownloadCommonMode;
- (void)createNetworkRequest:(id)a0;
- (void)startDownloadWithMars:(id)a0;
- (void)onDownloadComplete:(id)a0 request:(id)a1 path:(id)a2;
- (void)startDownloadTaskWithURLChannel:(id)a0;
- (void)onDownloadHeadImageFail:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)onModifyContact:(id)a0;
- (void).cxx_destruct;

@end
