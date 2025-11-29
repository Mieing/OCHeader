@class NSString, NSURL, MediaDecrypter, AWEProgressLoadingView, AWEParallelDownloader;
@protocol IESIMHttpTask, AWEMediaDownloadLoadingViewProtocol;

@interface AWEIMPublishQuickStoryUtils : NSObject

@property (retain, nonatomic) id<IESIMHttpTask> fetchURLTask;
@property (retain, nonatomic) AWEParallelDownloader *downloader;
@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *decryptedFileURL;
@property (retain, nonatomic) AWEProgressLoadingView<AWEMediaDownloadLoadingViewProtocol> *downloadLoadingView;
@property (retain, nonatomic) NSString *videoTKey;
@property (retain, nonatomic) NSString *videoSKey;
@property (retain, nonatomic) NSString *videoMD5;
@property (copy, nonatomic) NSString *loadingText;

+ (void)decryptVideoFileAtPath:(id)a0 toPath:(id)a1 decryptionKey:(id)a2 onCompletion:(id /* block */)a3;
+ (id)localImageWithMessage:(id)a0;
+ (id)extraInfoForEditViewControllerOfMessage:(id)a0;
+ (void)gotoEditViewControllerWithImage:(id)a0 extraInfos:(id)a1;
+ (void)gotoEditViewControllerWithLocalImagePath:(id)a0 extraInfos:(id)a1;
+ (void)transferToEditPageWithImages:(id)a0 extraInfos:(id)a1;
+ (id)localVideoFilePathWithMessage:(id)a0;
+ (id)videoSkeyWithMessage:(id)a0;
+ (void)gotoEditViewControllerWithLocalVideoPath:(id)a0 extraInfos:(id)a1;
+ (void)transferToEditPageWithImages:(id)a0 extraInfos:(id)a1 conversation:(id)a2 styleID:(id)a3;
+ (void)gotoEditViewControllerWithLocalImagePath:(id)a0;
+ (void)gotoEditViewControllerWithImage:(id)a0;
+ (void)gotoEditViewControllerWithLocalVideoPath:(id)a0;

- (void)downloadVideo:(id)a0 atFileURL:(id)a1 progress:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (void)downloadImageWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)downloadVideoWithMessage:(id)a0 completion:(id /* block */)a1;
- (id)downloadImageParamsWithMessage:(id)a0;
- (void)configVideoLocalInfo:(id)a0;
- (void)cancelAllVideoTasks;
- (void)fetchVideoURLWithVideoTKey:(id)a0 OnCompletion:(id /* block */)a1;
- (void).cxx_destruct;

@end
