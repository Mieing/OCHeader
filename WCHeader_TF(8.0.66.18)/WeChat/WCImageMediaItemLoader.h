@class WCMediaItem, ImageStyle;

@interface WCImageMediaItemLoader : NSObject <WCFacadeExt>

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (nonatomic) long long imageType;
@property (copy, nonatomic) id /* block */ imageHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) ImageStyle *imageStyle;
@property (retain, nonatomic) WCImageMediaItemLoader *retainedSelf;

+ (BOOL)hasImageData:(id)a0 imageType:(long long)a1;

- (id)initWithMediaItem:(id)a0 imageType:(long long)a1;
- (void)startDownloadImage;
- (id)getImageFromCache;
- (id)getSmallImageFromCache;
- (id)getBigImageFromCache;
- (void)getImageWithType:(long long)a0 imgHandler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (BOOL)isValidDownloadType:(long long)a0;
- (id)mediaID;
- (id)getLoaderKeyWithMediaID;
- (void)subscribeMediaItemDownload;
- (void)unsubscribeMediaItemDownload;
- (void)onDownloadMediaProcessChange:(id)a0 downloadType:(long long)a1 current:(long long)a2 total:(long long)a3;
- (void)onDownloadFinish:(id)a0 downloadType:(long long)a1;
- (void)onDownloadFail:(id)a0 downloadType:(long long)a1;
- (void)updateImage;
- (void)onCancelDownloadSuccess:(id)a0 downloadType:(long long)a1;
- (void)celar;
- (void)dealloc;
- (BOOL)hasImageData;
- (double)imgAspectRatio;
- (id)defaultImage;
- (void)setImageStyleHandler:(id /* block */)a0;
- (id)getImageStyle;
- (void)addToImageStyleLoaderMgr;
- (void)removeFromStyleLoaderMgr;
- (void)_retainSelf;
- (void)_releaseSelf;
- (void).cxx_destruct;

@end
