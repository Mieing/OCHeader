@class MMFinderLiveResDownloadManager;

@interface MMFinderLiveECPAGLoader : NSObject

@property (class, readonly, nonatomic) MMFinderLiveResDownloadManager *downloadManager;

+ (id)fileCached:(id)a0;
+ (id)defaultPathProvider;
+ (void)loadURL:(id)a0 completion:(id /* block */)a1;
+ (id)loadURL:(id)a0;

@end
