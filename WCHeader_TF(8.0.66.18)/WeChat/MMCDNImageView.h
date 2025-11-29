@class NSString, UIImage;

@interface MMCDNImageView : MMUIImageView <ICdnComMgrExt, AppStandardContentExternalLoadImageView> {
    UIImage *_defaultImage;
    NSString *_clientID;
    BOOL _isloaded;
    NSString *_localSrcTmpPath;
}

@property (retain, nonatomic) NSString *localSrcPath;
@property (retain, nonatomic) NSString *cdnUrl;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) BOOL isCompressImage;
@property (nonatomic) BOOL isClipImage;
@property (nonatomic) BOOL autoDownloadNoWifi;
@property (nonatomic) BOOL isFromC2C;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDefaultImage:(id)a0;
- (id)compressImage:(id)a0;
- (id)clipImage:(id)a0 withData:(id)a1;
- (void)setImage:(id)a0;
- (void)loadingImageWithGCD;
- (BOOL)startLoadingImage;
- (void)stopLoadingImage;
- (void)OnCdnDownload:(id)a0;
- (void).cxx_destruct;

@end
