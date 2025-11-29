@class AWEIMAwemeMediaDownloaderContext, AWEIMMixImageMessage, NSString, UIImage, AWEUILoadingView;

@interface AWEIMAwemeMediaMixedImageDownloader : NSObject <AWEIMAwemeMediaDownloaderProtocol>

@property (retain, nonatomic) AWEIMMixImageMessage *message;
@property (retain, nonatomic) AWEIMAwemeMediaDownloaderContext *context;
@property (retain, nonatomic) UIImage *currentImage;
@property (nonatomic) BOOL hasOriginImage;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0 context:(id)a1;
- (void)downloadAndSaveToAlbum;
- (void)p_saveCurrentImage;
- (void)p_image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)p_showAlbumPrivacyAlert;
- (void).cxx_destruct;

@end
