@class NSURLCache;

@interface FBSDKImageDownloader : NSObject {
    NSURLCache *_urlCache;
}

@property (class, readonly, nonatomic) FBSDKImageDownloader *sharedInstance;

- (id)init;
- (void)removeAll;
- (void)downloadImageWithURL:(id)a0 ttl:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
