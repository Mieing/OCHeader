@class NSString, NSURLSession;

@interface BDLynxResourceDownloader : NSObject

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSString *cacheDir;

+ (id)sharedDownloader;

- (void)downloadLynxFile:(id)a0 completion:(id /* block */)a1;
- (id)md5StringOfString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
