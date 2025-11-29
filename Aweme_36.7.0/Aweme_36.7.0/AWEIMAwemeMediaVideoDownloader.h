@class AWEProgressLoadingView, AWEIMMessage, NSString, UIImage, NSURL, MediaDecrypter, AWEParallelDownloader;
@protocol IESIMHttpTask, AWEMediaDownloadLoadingViewProtocol;

@interface AWEIMAwemeMediaVideoDownloader : NSObject <IESIMAwemeMediaVideoDownloaderProtocol>

@property (retain, nonatomic) AWEIMMessage *message;
@property (retain, nonatomic) NSString *videoLocalURL;
@property (retain, nonatomic) NSString *videoURL;
@property (retain, nonatomic) NSString *posterLocalURL;
@property (retain, nonatomic) UIImage *currentPosterImage;
@property (nonatomic) BOOL downloadWithoutSaveToAlbum;
@property (nonatomic) BOOL hideLoadingView;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (retain, nonatomic) NSString *videoTKey;
@property (retain, nonatomic) NSString *videoSKey;
@property (retain, nonatomic) NSString *videoMD5;
@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSURL *decryptedFileURL;
@property (nonatomic) BOOL hasSavedVideoFromLibraryFaildBefore;
@property (nonatomic) unsigned long long downloadRetryTimes;
@property (retain, nonatomic) AWEParallelDownloader *downloader;
@property (retain, nonatomic) id<IESIMHttpTask> fetchURLTask;
@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (retain, nonatomic) AWEProgressLoadingView<AWEMediaDownloadLoadingViewProtocol> *downloadLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMessage:(id)a0 context:(id)a1;
- (void)downloadAndSaveToAlbum;
- (void)setupWithMessage:(id)a0 context:(id)a1;
- (void)downloadWithoutSaveCompletion:(id /* block */)a0;
- (void)saveVideoFileToAlbum:(id)a0 onCompletion:(id /* block */)a1;
- (id)p_moveFileToAttachmentPathAndUpdateDBModelWithTmpPath:(id)a0;
- (void)decryptVideoFileAtPath:(id)a0 toPath:(id)a1 decryptionKey:(id)a2 onCompletion:(id /* block */)a3;
- (void)downloadVideo:(id)a0 atFileURL:(id)a1 progress:(id /* block */)a2 onCompletion:(id /* block */)a3;
- (void)fetchVideoURLOnCompletion:(id /* block */)a0;
- (void)cancelDownloadVideo;
- (void)p_configLocalInfo;
- (void)p_parseLocalFilePath;
- (void)downloadVideoWith:(id)a0;
- (void)doRealDownloadAndSave;
- (void)traceMediaDownloadStatus:(BOOL)a0 stage:(long long)a1 errorCode:(long long)a2;
- (void).cxx_destruct;
- (void)cancelAllTasks;

@end
