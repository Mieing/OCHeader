@interface AWEOpenShareProcessUtils : NSObject

+ (long long)videoMaxSize;
+ (void)downLoadVideo:(id)a0 processStype:(id /* block */)a1 process:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downLoadImageList:(id)a0 processStype:(id /* block */)a1 process:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)createLocalImagePath;
+ (id)extensionForContentType:(id)a0;
+ (long long)limitLoadingMaxSize;
+ (id)createLocalVideoPathWithExtension:(id)a0;
+ (id)getXSecurityArgus;
+ (void)getHeaderWithURL:(id)a0 completion:(id /* block */)a1;
+ (void)getAlbumImages:(id)a0 process:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)checkAlbumSize:(id)a0 completion:(id /* block */)a1;
+ (long long)imageMaxSize;

@end
