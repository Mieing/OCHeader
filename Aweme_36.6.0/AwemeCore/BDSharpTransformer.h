@class NSError, BDImageSharpConfig;

@interface BDSharpTransformer : BDBaseTransformer

@property (nonatomic) BOOL sharpFinished;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long sharpDuration;
@property (nonatomic) long long sharpStatus;
@property (retain) BDImageSharpConfig *sharpConfig;

+ (BOOL)enableMultiThread;
+ (void)setEnableMultiThread:(BOOL)a0;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)a0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void).cxx_destruct;
- (id)init;

@end
