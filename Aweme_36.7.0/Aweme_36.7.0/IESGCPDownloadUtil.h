@interface IESGCPDownloadUtil : NSObject

+ (void)downloadVideoWithURL:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)downloadWithURLs:(id)a0 isVideo:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadImageWithURL:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;

@end
