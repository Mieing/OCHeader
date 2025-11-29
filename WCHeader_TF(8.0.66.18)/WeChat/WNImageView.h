@class NSString;
@protocol WNImageViewDelegate;

@interface WNImageView : MMWebImageView <IFavCdnDownloadMgrExt, IRecordDownloadExt>

@property (retain, nonatomic) NSString *localSrcPath;
@property (retain, nonatomic) NSString *cdnUrl;
@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) NSString *dataId;
@property (nonatomic) BOOL isThumb;
@property (weak, nonatomic) id<WNImageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getCompressImageWithPath:(id)a0;
- (BOOL)startLoadingImage;
- (void)forceLoadImage;
- (void)loadingImageWithGCD;
- (void)stopLoadingImage;
- (void)OnFavCdnDownload:(id)a0 RetCode:(int)a1;
- (void)OnDownloadRecordMessageOK:(id)a0 DataId:(id)a1 bThumb:(BOOL)a2;
- (void).cxx_destruct;

@end
