@class NSString, FavoritesItem, NSMutableArray, FavoritesDownloadCDNInfo;
@protocol FavoritesDownloaderDelegate;

@interface FavoritesDownloader : MMObject <IFavCdnDownloadMgrExt> {
    FavoritesItem *_favItem;
    NSMutableArray *_downloadInfoList;
    FavoritesDownloadCDNInfo *_downloadingInfo;
    BOOL _bPrior;
    int _downloadRetCode;
}

@property (weak, nonatomic) id<FavoritesDownloaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavoritesItem:(id)a0 isPrior:(BOOL)a1;
- (void)dealloc;
- (void)run;
- (void)stop;
- (id)getItem;
- (void)addDownloadItem:(id)a0 withDataList:(id)a1;
- (void)tryStartNextData;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void).cxx_destruct;

@end
