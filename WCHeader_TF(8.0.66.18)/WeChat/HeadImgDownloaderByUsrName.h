@interface HeadImgDownloaderByUsrName : HeadImgBaseDownloader

- (id)init;
- (void)addDownloadRequest:(id)a0 forCategory:(unsigned char)a1;
- (void)createNetworkRequest:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;

@end
