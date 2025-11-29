@class NSData, UIImage, NSMutableDictionary, NSDictionary, NSObject, NSIndexSet, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface FLAnimatedImage : NSObject

@property (readonly, nonatomic) unsigned long long frameCacheSizeOptimal;
@property (readonly, nonatomic, getter=isPredrawingEnabled) BOOL predrawingEnabled;
@property (nonatomic) unsigned long long frameCacheSizeMaxInternal;
@property (nonatomic) unsigned long long requestedFrameIndex;
@property (readonly, nonatomic) unsigned long long posterImageFrameIndex;
@property (readonly, nonatomic) NSMutableDictionary *cachedFramesForIndexes;
@property (readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes;
@property (readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes;
@property (readonly, nonatomic) NSIndexSet *allFramesIndexSet;
@property (nonatomic) unsigned long long memoryWarningCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) struct CGImageSource { } *imageSource;
@property (readonly, nonatomic) FLAnimatedImage *weakProxy;
@property (readonly, nonatomic) UIImage *posterImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) NSDictionary *delayTimesForIndexes;
@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long frameCacheSizeCurrent;
@property (nonatomic) unsigned long long frameCacheSizeMax;
@property (readonly, nonatomic) NSData *data;

+ (void)logStringFromBlock:(id /* block */)a0 withLevel:(unsigned long long)a1;
+ (id)predrawnImageFromImage:(id)a0;
+ (id)animatedImageWithGIFData:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForImage:(id)a0;
+ (void)setLogBlock:(id /* block */)a0 logLevel:(unsigned long long)a1;
+ (void)initialize;

- (void)purgeFrameCacheIfNeeded;
- (id)initWithAnimatedGIFData:(id)a0;
- (id)initWithAnimatedGIFData:(id)a0 optimalFrameCacheSize:(unsigned long long)a1 predrawingEnabled:(BOOL)a2;
- (id)frameIndexesToCache;
- (void)addFrameIndexesToCache:(id)a0;
- (void)resetFrameCacheSizeMaxInternal;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)a0;
- (id)imageLazilyCachedAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)dealloc;
- (id)imageAtIndex:(unsigned long long)a0;

@end
