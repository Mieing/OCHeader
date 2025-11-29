@class NSOperationQueue;

@interface IESLiveKTVTuningEffectResourceManager : NSObject

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (nonatomic) long long retryCount;

+ (id)cachePath:(id)a0;
+ (id)cacheDirectory;

- (void)downloadTuningEffect:(id)a0 completion:(id /* block */)a1;
- (void)removeObsoleteTuningEffectResource:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
