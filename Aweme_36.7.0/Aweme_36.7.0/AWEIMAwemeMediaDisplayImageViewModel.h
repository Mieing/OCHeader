@class UIImage, AWEIMMessage;
@protocol AWEIMAwemeMediaImageDownloader;

@interface AWEIMAwemeMediaDisplayImageViewModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL hasOriginImage;
@property (retain, nonatomic) id<AWEIMAwemeMediaImageDownloader> downloader;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWEIMMessage *message;

- (void)getImageWithMessage:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableImageMediumTest;
- (void)p_configImageContainMediumImage;
- (void)p_configImageUseOrigin;
- (BOOL)enableImageLoadTempCache;
- (void)p_configDownloadingStateLocalImageWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
