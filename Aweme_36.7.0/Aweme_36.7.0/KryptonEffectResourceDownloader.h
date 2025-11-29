@class NSString;

@interface KryptonEffectResourceDownloader : NSObject

@property (copy, nonatomic) NSString *dirPath;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *zipPath;

+ (id)sharedInstance;

- (void)downloadResourceWithConfigService:(id)a0 loaderService:(id)a1 completion:(id /* block */)a2;
- (void)downloadModel:(id)a0 withCompletion:(id /* block */)a1;
- (void)downloadSticker:(id)a0 withCallback:(id /* block */)a1;
- (void).cxx_destruct;

@end
