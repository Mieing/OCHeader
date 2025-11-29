@class NSArray, NSString, NSURL, TTHttpTask;

@interface AWESecureArchiveDownloader : NSObject

@property (retain, nonatomic) TTHttpTask *currentTask;
@property (nonatomic) long long currentIndex;
@property (copy, nonatomic) NSArray *URLs;
@property (copy, nonatomic) NSURL *archiveFileURL;
@property (copy, nonatomic) NSURL *autoUnarchiveURL;
@property (nonatomic) BOOL removeArchiveFileWhenDone;
@property (copy, nonatomic) NSString *archivePassword;
@property (copy, nonatomic) NSString *expectedFileMD5;
@property (copy, nonatomic) id /* block */ completion;

- (void)resumeWithCurrentIndex:(long long)a0 error:(id)a1;
- (void)completeWithSuccess:(BOOL)a0 error:(id)a1;
- (void)downloadResourceWithURL:(id)a0 archiveFileURL:(id)a1 autoUnarchiveURL:(id)a2 expectedFileMD5:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (BOOL)resume;
- (void)cancel;

@end
