@class HeadImgDownloaderByUrl, NSString, NSCache, MMHDHeadImgDownloader, HeadImgDownloaderByUsrName;
@protocol HeadImgDelegate;

@interface MMHeadImageDownloader : MMObject <HeadImgDownloaderDelegate> {
    HeadImgDownloaderByUrl *_urlDownloader;
    HeadImgDownloaderByUsrName *_usrNameDownloader;
    MMHDHeadImgDownloader *_hdHeadImgDownloader;
    NSCache *_autoUpdatedUsrName;
}

@property (weak, nonatomic) id<HeadImgDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addDownloadRequest:(id)a0 forCategory:(unsigned char)a1;
- (void)addDownloadRequestWithUrl:(id)a0 url:(id)a1 forCategory:(unsigned char)a2;
- (void)cancelRequest:(id)a0;
- (void)setDownloadFastMode;
- (void)setDownloadCommonMode;
- (id)getUsrHeadImgUrl:(id)a0 withCategory:(unsigned char)a1;
- (unsigned int)downloadHDHeadImg:(id)a0 forCategory:(unsigned char)a1;
- (unsigned int)downloadHDHeadImg:(id)a0 url:(id)a1 forCategory:(unsigned char)a2;
- (BOOL)isNeedGetHDImg:(id)a0;
- (void)removeUsrFromLastFailureList:(id)a0;
- (BOOL)isNeedAutoUpdateHeadImgForUsr:(id)a0;
- (id)getUsrHDHeadImgUrl:(id)a0;
- (void)onHeadImgDownloadFinish:(id)a0 Status:(id)a1 Image:(id)a2 Category:(unsigned char)a3;
- (void)onHDHeadImgDownloadFinish:(id)a0;
- (void).cxx_destruct;

@end
