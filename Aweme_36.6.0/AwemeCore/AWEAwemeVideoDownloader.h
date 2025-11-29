@interface AWEAwemeVideoDownloader : NSObject

+ (id)getLocalVideoURLForAweme:(id)a0;
+ (BOOL)validateVideoURL:(id)a0;
+ (id)forceFlagFilePathWithDestURL:(id)a0;
+ (id)ttnet_downloadVideo:(id)a0 destURL:(id)a1 requestConfig:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)ttnet_getLocalVideoFromAweme:(id)a0 enterFrom:(id)a1 requestConfig:(id /* block */)a2 forceDownload:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)p_downloadVideoWithUrl:(id)a0 destURL:(id)a1 completion:(id /* block */)a2;
+ (id)downloadVideoWithURLGoup:(id)a0 destinationURL:(id)a1 downloadTaskToStopDownload:(id *)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (void)getLocalVideoDontWaitForResultWithAweme:(id)a0 destURL:(id)a1 task:(id *)a2 enterFrom:(id)a3 isDashVideo:(BOOL)a4 forceCopy:(BOOL)a5 progress:(id /* block */)a6 completion:(id /* block */)a7;
+ (void)fetchLocalVideoFromAweme:(id)a0 enterFrom:(id)a1 forceDownload:(BOOL)a2 completion:(id /* block */)a3;
+ (void)fetchLocalVideoFromAweme:(id)a0 enterFrom:(id)a1 requestConfig:(id /* block */)a2 forceDownload:(BOOL)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
+ (void)fetchLocalVideoFromAweme:(id)a0 enterFrom:(id)a1 forceDownload:(BOOL)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)fetchEditChapterVideoFromAweme:(id)a0 enterFrom:(id)a1 requestConfig:(id /* block */)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)fetchLocalVideoFromVideoId:(id)a0 downloadUrl:(id)a1 completion:(id /* block */)a2;
+ (id)ttnet_downloadVideo:(id)a0 destURL:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
